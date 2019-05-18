# BluePillCamera
JPEG Camera with a Blue Pill and LoRa communication

Version 1.0.0, May, 2019
Author: Fabien Ferrero

<img src="https://github.com/FabienFerrero/BluePillCamera/blob/master/doc/UCAM3.jpg">


# Bill Of Material


* STM32 BLuePill
https://wiki.stm32duino.com/index.php?title=Blue_Pill


* RFM95W
https://fr.aliexpress.com/item/RFM95W-RFM95-868MHz-LORA-SX1276-wireless-transceiver-module-20DBM-3KM-Best-quality/32810607598.html?spm=a2g0s.9042311.0.0.bMWhGH

* UCAM3
https://www.4dsystems.com.au/product/uCAM_III/


# Wiring

```
 BluePill       UCAM3 
 STM32           Module
 Rx  <----> PB10
 Tx <----> PB11
 GND <----> GND
 5V <----> 5V
 3.3V <----> Res

 ```

# Librairies

A modified version of https://github.com/dgtlmoon/uCamII is used

# License

All rights reserved. This Gerber, program and the accompanying materials are made available under the terms of the MIT License which accompanies this distribution, and is available at https://opensource.org/licenses/mit-license.php
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Maintained by Fabien Ferrero
