# SRF05_Z00
## this repository will give you anything you need to setup an ultrasonic SRF SRF04 or SRF05 sensor
_**be carefull this guide based on Arduino**_

UltraSonic SRF05 sensor module is a distance measuring tool, which works with transmit and reciving ultra sonic puls and measuring time between them.

![SRF05][srf05]

### Get Started With SRF05
1. first, if you are such a nerd person, go to the *Docs* directory and read the HY-SRF05-Datasheet.pdf before everything
2. but if not, follow the steps to set the SRF05 with Arduino
3. connect your SRF05 wirings like below

![SRFWiring][srfWiring]

4. go to the Codes library, download the SRF_HowToWork.ino and upload it on you arduino board.
* make sure you reading the comments.

**_now you sets the SRF up, but how does it work**_
5. go to the Docs directory and read Application_of_ultrasonic_sensor_for_measuring_dis.pdf.
* again, **READ IT**
6. you can use the SRF_BetterUse.ino code in the Codes directory in your othe codes
7. also you can use the [RSRF Library][srfLibrary] which is based on the codes you tested before.

**good Luck**

[srf05]: https://hackster.imgix.net/uploads/attachments/327620/hy-srf05-top_OANZvS9lkN.jpg?auto=compress%2Cformat&w=400&h=300&fit=min
[srfWiring]: http://wiki.t-o-f.info/uploads/Arduino/HC-SR05_SRF0_ultrasonic_range_circuit.png
[srfLibrary]: https://github.com/razaqnejad/Libraries/blob/main/RSRF.zip
