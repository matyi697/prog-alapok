import pyautogui
import time
from PIL import ImageGrab

# kattintunk a mezobe
# beirjuk a szamot + enter
# megnezzuk a pixelt sikerult-e
# ha nem a szamot novelem es ujra kezdem

x_kattintas = 940
y_kattintas = 680

x_pixel = 1440
y_pixel = 350

kezdo_szam = 0
vegso_szam = 9999

kesleltetes = 0.5

time.sleep(5)

#kezdo_kep = ImageGrab.grab()
#kezdo_szin = kezdo_kep.getpixel((x_pixel, y_pixel))

kezdo_szin = ImageGrab.grab().getpixel((x_pixel, y_pixel))

for szam in range(0, 10000):
    kod = str(szam).zfill(4)
    
    pyautogui.click(x_kattintas, y_kattintas)
    pyautogui.write(kod, interval= 0.2)
    pyautogui.press("enter")
    
    time.sleep(0.5)
    
    uj_kep = ImageGrab.grab().getpixel((x_pixel, y_pixel))
    
    if uj_szin != kezdo_szin:
        print(kod)
        break
