## Week 1: Introduction

![IoT](https://www.enterrasolutions.com/media/IoT1-300x300.png "IoT")

### Internet Of Things (IoT)
* “the interconnection via the Internet of computing devices embedded in everyday objects, enabling them to send and receive data” - dictionary.com
* It is taking a “less intelligent” item, and make it “Smarter” by controlling it through **HTTP (Hyper-Text Transfer Protocol)**  Requests through the web server.
![Cloud](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/cloudservice.png "cloud")
* Some examples of some IoT projects could be:
    * Home Automations
    * Ski Condition Alert
    * Robotics
    * Environmental Sensing
    * Health Monitoring

### Web Basics Review
* A **browser** is an application running on your computer (or smartphone, tablet, etc.) that makes it possible for us to see a webpage. Examples of browsers are: Safari, Chrome, Firefox, Internet Explorer, Opera, etc
![BROWSER](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/browser.png "Browser")
* **Web Servers** are computers that are always connected to the internet, and send data out when requested. 
* If you enter a **URL (web address)** into the browser, this information is divided up into smaller pieces
![URL FORMAT](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/urlformat.png "url format")
    * **Protocol** - (How?) It tells the computer how to talk to the server.
    * **Server** - (Where?) It tells the computer the name of the web server.
    * **Path** - (What?) It tells the computer what you are requesting to view. 
* After we connect to the web through an ISP...
![MAP](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/map.png "map")
    1. The Browser connects to the DNS server.
    2. The DNS server then tells the browser the location of the web server hosting the site.
    3. The IP Address that the DNS server returns to your computer allows your browser to contact the web server that hosts the website you requested.
    4. The web server then sends the page you requested back to your web browser.
* **Internet Service Provider (ISP)** is a company that provides access to the internet. (i.e. Verizon, optimum, aol)
* **Domain Name System (DNS) Server** translates domain names and hostnames into an IP address. This works like a big phone book! 
* **Internet Protocol Address (IP Address)** is a unique string of numbers separated by periods thatidentify each computer connected using an Internet Protocol to communicate over a network. (i.e. 127.0.0.0)
* The browser sends a message to the web server called an **HTTP Request**. It answers the browser with an **HTTP Respond**. 
    * If the server cannot find what the browser requested, the HTTP Response is a **404 error**. 
    * **HTTP** stands for **HyperText Transfer Protocol**. It was designed to download so-called hypertext documents (web pages) and to send some basic information back to the web server.
    * Web pages are created using the formatting language **HTML**, or **HyperText Markup Language**.

### All About Communication
* Web development is all about the communication between 2 parties:
    * The **client**, which requests pages from the server, and displays them to the user. This is usually coded in HTML, CSS and JavaScript.
    * The **server**, which is responsible for serving pages. This is usually programmed in Python, Rails, Java, SQL, JavaScript, etc.
* In most cases, the client is a web browser, but this could also be another device that is connected to the internet.
* **Client Side Programming** - make interactive web pages, as well as, making stuff happen dynamically on a web page and can interact with temporary storage, and local storage (cookies, localStorage) 
* **Server Side Programming** - processes user input, displays pages, structures web applications, and interacts, with permanent storage (database & files).
![Without Database](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/wodatabase.png "without database")
![With Database](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/wdatabase.png "with database")


### IoT Platforms
* A **Microcontroller** is a small low power computer on a single integrated circuit. It runs your software and tells the components what to do. Unlike a computer, it can only run one application (**firmware**). 
* **Firmware** can be simple (just a few lines of code), or very complex. 
#### Arduino
* Arduino is a microcontroller that has input/output pins for electronics that the microcontroller can "control".
* The software is open-source, meaning that nothing is hidden, and we can completely modify it as needed.
* Additional shields can further an arduino's capabilities, allowing for wifi, bluetooth, motor, audio control. 
* Arduino Uno does not have network capabilities without a wifi or ethernet shield. Arduino Yun does.
![Arduino](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/arduino.jpg "arduino")

#### RF Duino
* A smaller Arduino-like microcontroller with a wireless enabled microcontroller. 
* Additional shields can further an RFDuino's capabilities; programming these boards requires a usb shield.
![rfduino](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/rfduino.png "rfduino")

#### Raspberry Pi
* These are small computers on a single card. They have an HDMI port and USB ports, allowing us to plugin a keyboard and monitor. 
* These require a small usb adapter to connect to the internet.
![pi](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/pi.png "pi")

#### Photon
* The Photon is a microcontroller,but unlike the Arduino it has a Wi-Fi Module.The Wi-Fi module allows your Photon to communicate with the internet. 
* The pins are input and output ports on the microcontroller that are exposed on the sides of the Photon.
    * **GPIO** pins can be hooked to sensors or buttons to listen to the world, or they can be hooked to lights and buzzers to act upon the world. 
    * There are also pins to allow you to **power** your device, or power motors and outputs outside of your device. 
    * There are pins for **Serial/UART** communication, and a pin for resetting your device.
![photon 2](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/photon2.png "photon 2")

* There are several awesome buttons and LEDs on your Photon to make it easier to use.
    * The **SETUP** button is on the left and the **RESET** button is on the right. You can use these buttons to help you set your device's mode.
    * The **RGB LED** is in the center of your Photon, above the module. The color of the RGB LED tells you what mode your Photon is currently in.
    * The **D7 LED** is next to the D7 pin on your Photon, on the upper right quadrant. This LED will turn on when the D7 pin is set to HIGH.
![photon 1](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/photon1.png "photon 1")


### Set-up
#### C9 Web Server Set-up
![C9 Workspace](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/workspace.png "C9 Workspace")
    * Create a **new** workspace. 
    * Name it using the following format: **username_iot_w18**
    * Make sure it is a **public** or open workspace.
    * Choose the box for **node.js**.
    * Click **Create Workspace**.
    * Once the IDE has loaded, create a folder for this weeks work called **wk1_exercises**
    
#### Creating an running Webpages on C9
![C9 HTML](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/html.png "C9 HTML")
    *  Right click on the **wk1_exercises** folder and select new file. When it appears, name the file **index.html** and double click on it to open. 
    *  This will be our homepage for week 1 exercises. You can write HTML code within it, you can also include css and scripts (just as you would on a real web server.)
    * To preview this page, you can press the run button on the top of the page and then click the link that is sent to the terminal window below, or you can use the following link (since we dont have to complile anything. **https://w18-intro-to-iot-username.c9users.io/wk1_exercises/index.html**.
    
#### C9 Particle Set-up 
![C9 particle](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/particle.png "C9 particle")
    * You should see a terminal window already opened. Click inside to set focus and in the command line, type: **npm install -g particle-cli** to the Particle CLI.
    * This will take a few seconds to install, but once completed create a new folder called **particle**.
    * Now, we are ready to start creating particle/photo projects.
        * To login to the Particle Cloud type: **particle login** and provide your cloud login credentials.
        * When ready to compile and/or flash make sure the terminal window has been directed to the correct directory. By default, you are in the "~/workspace" directory. To change to your project directory, type: **cd particle**. 
        * To complile the program type: **particle compile**. This will send your file up to the Particle cloud, compile it, and download the binary output of the compile operation.
        * You can also flash the code to a device using particle **flash YOUR_TARGET_DEVICE_ID**.
        
#### Particle Cloud Overview (from Particle Support Website  )
![Particle Cloud](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/particlecloud.png "Particle Cloud")
* Particle Build is an **Integrated Development Environment**, or IDE. (IDE's allow software development in an application.
* The **Navigation bar** is on the left. On the top, there are three buttons, which serve important functions:
    * **Flash**: Flashes the current code to the device. This initiates an over-the-air firmware update and loads the new software onto your device.
    * **Verify**: This compiles your code without actually flashing it to the device; if there are any errors in your code, they will be shown in the debug console on the bottom of the screen.
    * **Save**: Saves any changes you've made to your code.
* At the bottom, there are four more buttons to navigate through the IDE:
    * **Code**: Shows a list of your firmware applications and lets you select which one to edit/flash.
    * **Library**: Explore libraries submitted by other users, and develop your own.
    * **Docs**: Brings you to the documentation for Particle.
    * **Devices**: Shows a list of your devices, so you can choose which to flash, and get more information on each device.
    * **Settings**: Change your password, log out, or get your access token for API calls.
* Keyboard shortcuts: https://github.com/ajaxorg/ace/wiki/Default-Keyboard-Shortcuts

### C /C# Syntax
Every new application for the Photon or Arduino should begin with this skeleton:
``` C 

void setup(){
    
}

void loop(){
    
}

```
* When we start a new program we always have to include two functions, they are: **void setup** & **void loop**. They are called with a **void** because functions need to specify a type, since neither of these has a type, they are considered void. 
* The **setup** function is similar to an init in Java and Python Classes, it will only run once -- to set the program/class/object up. 
* The **loop** function, loops until it is told to stop. 
* The **( )** next to each of these functions will hold parameters, or variables that we can pass through the function. 
* The **{ }** will hold the contents of each of the functions. All of our code is written within these two brackets, and will end with a **;** after each line.
* **Indent each of the lines of code appropriately, so that it is easy to see what it belongs to. 

#### Photon Exercise 1: Photo Exercise 1: Control The RGB LED
* Now that we know the syntax, lets write a program to blink the RGB LED on the Photon Board. 
* Using our skeleton the first thing we need to do in the **setup** function is tell the computer what we will be controlling. We do this here, in the **set-up** because we only have to tell the computer this once... and it will not change. (Just like when Mom tells you to make your bed... )
* To select the RGB LED, we state the LED we will control, followed by the control function and then set it's parameter to true. 
``` C 
void setup(){
    RGB.control(true);
}
```
* Now that we have control of that LED, we can change its color of the LED. Since we are changing the color of the RGB LED we need to identify this before the color function, like we did earlier with the control function. 
``` C 
void loop(){
    RGB.color(255, 0, 0);
}
```
* The **color** function has three integer parameters, one for **R**ed, one for **G**reen, and one for **B**lue. These numbers go from **0**-**255**. **0** is the absence of that color, and **255** is the full brightness of that color.  
![RGB color](https://github.com/compagnb/w18_intro_to_iot/blob/master/imgs/rgb.png "RGB Color")

* If we add another color change to our code, it will change the color... but the change will happen so fast that we will not be able to see it. In this case we can use a built in function called **delay**. 
``` C 
void loop(){
    RGB.color(255, 0, 0);
    delay(2000);
    RGB.color(0, 255, 0);
    delay(2000);
}
```
* The **delay** function hold a numberic parameter representative of milliseconds. This function will stop the loop from running until the amount of millisends in the parameter has passed. This is really important when creating applications that will update data... too long a delay may create a lag in the information, while to short of a delay could create a communication error. 

#### Photon Exercise 2: Blink the D0 and D7 LEDs

**digitalWrite**: Sets the pin to HIGH or LOW, which either connects it to 3.3V (the maximum voltage of the system) or to GND (ground). Pin D7 is connected to an on-board LED; if you set pin D7 to HIGH, the LED will turn on, and if you set it to LOW, it will turn off.

**analogWrite**: Sets the pin to a value between 0 and 255, where 0 is the same as LOW and 255 is the same as HIGH. This is sort of like sending a voltage between 0 and 3.3V, but since this is a digital system, it uses a mechanism called Pulse Width Modulation, or PWM. You could use analogWrite to dim an LED, as an example. 

The Photon has two **DACs (Digital to Analog converters)** onboard connected to pin DAC (A6) and A3, when you select analogWrite on those two pins you can set a value between 0 to 4095 (12bit resolution) and continous analog voltage will be applied at the pin output (not PWM), you can use it for controlling electronic devices that require precision analog voltage setting. Those two pins will be marked in orange color when activated in analogWrite mode (instead of yellow color for the rest of the PWM-enabled pins).

**digitalRead**: This will read the digital value of a pin, which can be read as either HIGH or LOW. If you were to connect the pin to 3.3V, it would read HIGH; if you connect it to GND, it would read LOW. Anywhere in between, it'll probably read whichever one it's closer to, but it gets dicey in the middle.

**analogRead**: This will read the analog value of a pin, which is a value from 0 to 4095, where 0 is LOW (GND) and 4095 is HIGH (3.3V). All of the analog pins (A0 to A7) can handle this. analogRead is great for reading data from sensors.

### In-class Exercises/Challenges: 
* Hello World Web Page thru C9.
* Build HTML/Javascript version of Madlibs.
* Photo Exercise 1: Control the RGB LED.
* Photon Exercise 2: Blink the D0 and D7 LEDs.
* Build the Morse Code Flasher App.

### Vocabulary:
Internet Of Things (IoT), Browser, Web Server, Protocol, Server, Path, ISP, DNS, IP Address, HTTP Request, HTTP Respond, Client Side Programming, Server Side Programming, Microcontroller, Micro-Computer

### HTML Tags:

### JavaScript:

### C /C#:
digitalWrite, analogWrite, Digital to Analog Converter (DAC), digitalWrite, analogWrite, 





