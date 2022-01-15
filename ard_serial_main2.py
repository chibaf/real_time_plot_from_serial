import serial, sys
import syslog
import time
from ard_serial_sub import ard_serial_sub

port = sys.argv[1]
speed = sys.argv[2]
for i in range(0,10):
  array=ard_serial_sub(port,speed)
  if len(array)==8:
    print(array)
exit()