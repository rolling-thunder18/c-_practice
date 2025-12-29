import cv2
import numpy as np

face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
)
smile_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_smile.xml"
)

happy = cv2.imread("happy.png", cv2.IMREAD_UNCHANGED)
neutral = cv2.imread("neutral.png", cv2.IMREAD_UNCHANGED)

cap = cv2.VideoCapture(0)
def overlay_png(bg, png, x, y, size=100):
    png = cv2.resize(png, (size, size))

    # If no alpha channel, just paste the image
    if png.shape[2] == 3:
        bg[y:y+size, x:x+size] = png
        return

    # With alpha channel
    b, g, r, a = cv2.split(png)
    mask = a / 255.0

    for c in range(3):
        bg[y:y+size, x:x+size, c] = (
            bg[y:y+size, x:x+size, c] * (1 - mask) +
            png[:, :, c] * mask
        )


while True:
    ret, frame = cap.read()
    if not ret:
        break

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)

    emoji = neutral

    for (x, y, w, h) in faces:
        roi_gray = gray[y:y+h, x:x+w]
        smiles = smile_cascade.detectMultiScale(
            roi_gray, 1.8, 20
        )

        if len(smiles) > 0:
            emoji = happy
        else:
            emoji = neutral

        # place emoji above face
        ex = x
        ey = max(0, y - 110)
        overlay_png(frame, emoji, ex, ey)
        break

    cv2.imshow("Emoji Face Detector", frame)

    if cv2.waitKey(1) & 0xFF == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
