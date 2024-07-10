# GARBAGE SORTING USING  TinyML :DEKUT-Hack-team34
## Description
This is our DEKUT Hack repo for our garbage sorting machine, aimed at revolutionizing the recycling sector to reduce pollution and minimize dump sites, which pose health and environmental hazards, and even flight risks when located near airports. Our initiative addresses the critical issue of microplastics leaching into our environment and prevents harmful substances from polluting our surroundings.

According to a September report by the World Bank, the fastest-growing regions for waste generation are sub-Saharan Africa and South Asia, where waste production is expected to triple and double, respectively, by 2050. By then, these regions will contribute 35 percent of the world's trash. In low-income countries, approximately 90 percent of waste is openly dumped or burned, exacerbating air quality issues that disproportionately affect the poor.



Safe, sustainable solid waste management has the potential to drive economic growth. Recycling and innovative products can create jobs while simultaneously addressing social and environmental challenges. Our project aims to be a catalyst for this positive change.

### The climate impact of waste disposal 

* Different types of waste impact the environment differently. However, all items placed in a landfill negatively impact the environment. 

   * Organic waste decomposes and creates carbon dioxide and methane gas. Methane is produced when no air is present, while carbon dioxide is the natural product when anything rots in the air. 
   * Inorganic waste includes products made from natural resources such as water, fuel, metal and timber, which causes greenhouse gas emissions, particularly carbon dioxide and other pollutants.  
   * Plastic waste produces greenhouse gas emissions during every stage of its lifecycle. Plastic extraction and transportation depend on oil, gas and coal. The production and disposal of plastics release tons of carbon emissions. 

## SYSTEM WORKING


* https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/e411cacf-5e31-49f1-8f63-3a7a58a8c9b9
* https://drive.google.com/drive/folders/12-3EcvkXgG_lS8H1xWCY7DMGgu9ITiNR?usp=sharing

## Hardware
* Raspberry Pi 4
* Pi Camera Module v2
* 1 Servo Motor
* Conveyor sorter
* Infrared sensor

## Software
* Edge Impulse Studio
* Arduino IDE

## methodology
### Raspberry pi 4 setup
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/52e5ad28-5179-4c65-bbd5-2ad714c8ab76)


### Data Collection
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/5d97fdd6-0a53-4f05-9ff4-5f6d093f2de8)


### Model training and validation
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/a960df55-22c5-4b79-b2f2-83fd825ebf88)
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/92a1e699-3453-4f40-b20f-94898df4b484)
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/3e18e05a-fa1c-403c-a70e-d7028a8484c9)
![image](https://github.com/Stevemwa/Garbage_Sorting-using-TinyML-DEKUT-Hack-team34/assets/62056954/0a103f1f-ae71-4c59-bd3a-5b2f71a7c418)




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


