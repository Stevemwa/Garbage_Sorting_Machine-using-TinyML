# Garbage_Sorting-using-TinyML-DEKUT-Hack-team34
## Description
This is out dekut hack repo on out garbage sorting machine aimed at improving recycling sector which will reduce pollution and reducing dump sites(health and environment hazards even flight risks when close to airports) reducing leaching of microplastics into our environment and preventing harmful substance polluting 

## Hardware
* Raspberry Pi 4
* Pi Camera Module v2
* 1 Servo Motors
* Conveyor sorter
* Infrared sensor

## Software
* Edge Impulse Studio
* Arduino IDE

## methodology
### Raspberry pi 4 setup

### Data Collection

### Model training and validation

### Model deployment

### Model application

### System Assembly

## How to run the system
* ```
   sudo apt update
  ```

  * Install pyserial
  ```
   pip install pyserial
  ```
  

* ```
   python3 classify.py /home/pi/Public/garbage_sorting-linux-armv7-v2.eim
  ```

## pi uart permission denied error13:
copy and paste on your terminal
* ```
   sudo usermod -a -G dialout $USER
  ```
* ```
  sudo chmod 666 /dev/ttyS0
  ```



## Resources
* https://circuitdigest.com/microcontroller-projects/tomato-sorting-machine-using-raspberry-pi
* https://github.com/edgeimpulse/linux-sdk-python/blob/master/examples/image/classify.py


