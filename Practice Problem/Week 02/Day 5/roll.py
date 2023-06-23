import pyautogui
from time import sleep
sleep(3)
initial_position=pyautogui.position()

for i in range(7804570,7810000):
    pyautogui.write(str(i))
    pyautogui.press('enter')
    sleep(2)
    pyautogui.click(initial_position)