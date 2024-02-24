import numpy as np
import cv2

cap = cv2.VideoCapture(0)
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_eye.xml')
smile_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_smile.xml')


while True:
    ret, frame = cap.read()
    font = cv2.FONT_ITALIC
    gray = cv2.cvtColor(frame , cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x,y), (x+w, y+h),(0,255,0),4)
        roi_grey = gray[y:y+h, x:x+w ]
        roi_color = frame[y:y+h, x:x+w ]
        eyes = eye_cascade.detectMultiScale(roi_grey, 1.3, 10)
        smiles = smile_cascade.detectMultiScale(roi_grey, 1.3, 35)
        for (ex, ey, ew, eh) in eyes:
            cv2.rectangle(roi_color, (ex, ey), (ex + ew, ey + eh), (0,0,0),2)
        for (sx, sy, sw, sh) in smiles:
            cv2.rectangle(roi_color, (sx, sy), (sx + sw, sy + sh), (200,150,47),2)
            cv2.putText(frame, 'happy', (x-150, y - 10), font, 0.9, (0, 0, 255), 2, cv2.LINE_AA)

    #frame = cv2.flip(frame,1)
    cv2.imshow('Frame', frame)
    if cv2.waitKey(1) == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()