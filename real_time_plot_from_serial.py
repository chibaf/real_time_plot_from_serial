import serial, sys
import time
import matplotlib.pyplot as plt

from ard_serial_sub import ard_serial_sub

data0=[0]*8
data=[data0]*10
print(data)
ser = serial.Serial(sys.argv[1],sys.argv[2])
while True:
  array=ard_serial_sub(ser)
  if len(array)==8:
#    data.prepend(array)
    data.pop(-1)
    print(len(data))
    data.insert(0,array)
    print(data)
    rez = [[data[j][i] for j in range(len(data))] for i in range(len(data[0]))]
    print(rez)
    x=range(0, 10, 1)
    plt.plot(x,rez[0])
    plt.plot(x,rez[1])
    plt.plot(x,rez[2])
    plt.plot(x,rez[3])
    plt.show()
    plt.pause(0.1)
    plt.close()
#    exit()
exit()