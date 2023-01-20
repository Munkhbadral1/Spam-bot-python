import pyautogui as p 
import time as t

t.sleep(3)  #3s

f=open('fileforspam', 'r')

for x in f:
    p.typewrite(x)
    p.press('enter')
