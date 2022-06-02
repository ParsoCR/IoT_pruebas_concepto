from time import sleep
from machine import Pin
from machine import I2C
from VL53L0X import VL53L0X

i2c = I2C(0, sda = Pin(21), scl = Pin(22))

tof = VL53L0X(i2c)

tof.start()

# print("Start")
# sleep(1)
# print(tof.read())
# sleep(1)
# tof.stop()
# print("End")


