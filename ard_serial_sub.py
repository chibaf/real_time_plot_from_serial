def ard_serial_sub(port,speed):

	import serial, sys
	import syslog
	import time
	
	ser = serial.Serial(port,speed)
	# Serial read section
	line = ser.readline()
	line2=line.decode('utf-8')
	data = [float(val) for val in line2.split(",")]
	return data
