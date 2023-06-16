import pyautogui
from time import sleep
sleep(3)
initial_position=pyautogui.position()

for i in range(3306465,3311009):
    pyautogui.write(str(i))
    pyautogui.press('enter')
    sleep(1)
    pyautogui.click(initial_position)