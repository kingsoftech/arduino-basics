# -*- coding: utf-8 -*-
"""
Created on Wed Jul  7 14:40:47 2021

@author: SOFTECH
"""

import serial 
import time

ser  = serial.Serial('COM7', baudrate =9600, timeout = 1)
time.sleep(3)
numPoints = 5
dataList = [0]*numPoints
def getValue():
    b = ser.write(b'g')
    arduinoData =ser.readline().decode().split('\r\n')
    return arduinoData

while(1):
    print(getValue())
   
        
     
    

