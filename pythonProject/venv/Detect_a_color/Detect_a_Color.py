import numpy as np
import cv2

cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    frame = cv2.flip(frame, 1)
    width = int(cap.get(3))
    height = int(cap.get(4))

    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    # Örnek olarak turuncu rengi seçiyoruz
    lower_orange = np.array([10, 100, 100], dtype=np.uint8)
    upper_orange = np.array([20, 255, 255], dtype=np.uint8)

    mask = cv2.inRange(hsv, lower_orange, upper_orange)

    result = cv2.bitwise_and(frame, frame, mask=mask)

    cv2.imshow('frame', result)
    cv2.imshow('mask',mask)
    if cv2.waitKey(1) == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
