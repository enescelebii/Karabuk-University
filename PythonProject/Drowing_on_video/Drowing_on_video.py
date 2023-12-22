import numpy
import numpy as np
import cv2

cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    frame = cv2.flip(frame,1)
    width = int(cap.get(3))
    height = int(cap.get(4))

    img = cv2.line(frame,(0,0),(width,height),(255,0,0),5)
    img = cv2.rectangle(img,(350,350),(200,200),(0,0,0),5)
    img = cv2.circle(img,(400,400),(50),(0,0,255),-1)
    img = cv2.circle(img,(500,100),(25),(0,255,0),3)
    font = cv2.FONT_ITALIC
    img = cv2.putText(img,'NABER',(220,100),font,2,(100,50,250),3,cv2.LINE_AA)



    cv2.imshow('frame',frame)

    if cv2.waitKey(1) == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()