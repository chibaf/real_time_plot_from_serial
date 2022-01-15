import serial, sys
import time
from ard_serial_sub import ard_serial_sub

ser = serial.Serial(sys.argv[1],sys.argv[2])
for i in range(0,10):
  array=ard_serial_sub(ser)
  if len(array)==8:
    print(array)
exit()