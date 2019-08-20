# IoT Challenge 2020
# www.i3indyatechnologies.com
<b>Instructor:<b>
    Sinku Kumar<br>
20/8/2019<br>

## Installation Guide:

### Atmel Studio IDE Installation:

### Download:
#### Download Atmel Studio 7.0(build 1931) Offline Installer From This Link:
http://studio.download.atmel.com/7.0.1931/as-installer-7.0.1931-full.exe
#### For Latest Version or Further Reference:
https://www.microchip.com/mplab/avr-support/atmel-studio-7

### Install:
#### 1. Browse the downloaded atmel studio installer.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(1).png"><img>

#### 2. Run the installer by double clicking on it.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(2).png"><img>

#### 3. Agree the license terms and conditions, click on Next.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(3).png"><img>

#### 4. Select Architecture, click on Next.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(4).png"><img>

#### 5. Select extensions, click on Next.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(5).png"><img>

#### 6. Wait till installer is validating your system, click on Next.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(6).png"><img>

* The above step may cause problems sometimes, restart your pc and run installer again.

#### 7. Click on Install.

<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(7).png"><img>


<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(8).png"><img>

<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(9).png"><img>

<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(10).png"><img>

#### 8. Select Always trust and click on Install.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(11).png"><img>

#### 9. Select Always trust and click on Install.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(12).png"><img>

#### 10. Click on Close.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(13).png"><img>


### USBasp Driver Installation:

### Download:
#### Download Zadig 2.4 From This Link:
https://github.com/pbatard/libwdi/releases/download/b721/zadig-2.4.exe
#### For Latest Version or Further Reference:
https://zadig.akeo.ie/

### Install:
#### 1. Connect Your USBasp to your Computer:

#### 2. Run Zadig-2.4 as Administrator:
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(85).png"><img>

#### 3. Click on No.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(86).png"><img>

#### 4. Select "libusb-win32 (v1.2.6.0)"
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(87).png"><img>

#### 5. Click on Install.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(88).png"><img>

#### 6. Installation may take some time, depends on the Computer's Hardware Configuration.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(89).png"><img>

#### 7. Go to Device Manager and look for Atmel USB Devices.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/Screenshot%20(91).png"><img>

## Atmel Studio Configuration:

### AVR Burner Configuration for Megatron.

#### 1. Run Atmel Studio
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(14).png"><img>

#### 2. Wait unitl it loads for the first time.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(15).png"><img>

#### 3. Default screen for Atmel Studio.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(16).png"><img>

#### 4. Click on Tools.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(1).png"><img>

#### 5. Select External Tools
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(2).png"><img>

#### 6. Click on add
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(3).png"><img>

#### 7. Give a name to your tool.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(4).png"><img>

#### 8. Suggested name Megatron.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(5).png"><img>

#### 9. Click on ... button.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(6).png"><img>

#### 10. Go to IoT_Workshop folder.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(8).png"><img>

#### 11. Go to Softwares folder.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(9).png"><img>

#### 12. Go to AVR_BURNER folder.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(10).png"><img>

#### 13. Select avrdude or avrdude.exe.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(11).png"><img>

#### 14. Click on Open.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(12).png"><img>

#### 15. In Arguments paste this.
<pre>avrdude -c usbasp -p atmega16 -U flash:w:$(ProjectDir)\Debug\$(TargetName).hex:i</pre>
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(20).png"><img>

<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(21).png"><img>

#### 16. Tick on use output window, click on Apply.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(22).png"><img>

#### 17. Click on Tools and look for Megatron.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Burner_Step%20(23).png"><img>

### Serial Terminal Installation:

#### 1. Run Atmel Studio
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(14).png"><img>

#### 2. Wait unitl it loads for the first time.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(15).png"><img>

#### 3. Default screen for Atmel Studio.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(16).png"><img>

#### 4. Click on Tools, select Extensions and Updates...
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(17).png"><img>

#### 5. In Online Section select microchip
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(18).png"><img>

#### 6. Go to Search bar.
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(19).png"><img>

#### 7. Search for "Terminal"
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(20).png"><img>

#### 8. Click on Download
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(21).png"><img>

#### 9. Click on Install
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(22).png"><img>

#### 10. Click on Restart Now
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(23).png"><img>

#### 11. Wait until your IDE restarts
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(24).png"><img>

#### 12. Click on View
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(25).png"><img>

#### 13. Select Terminal Window
<img src="https://github.com/sinku1196/IoT/blob/master/Megatron/Screenshots/AVR_Studio_Step%20(26).png"><img>
