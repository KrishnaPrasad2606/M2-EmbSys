#  SECURITY ALERT SYSTEM
 This is Arduino Controlled Door alarm can be installed near the door to detect the presence of anybody at the door. Whenever somebody comes in the range of Ultrasonic sensor, buzzer starts beeping and LED glows. You can adjust the sensor detection range according to your door. This system can also serve the purpose of Motion Detector.When the intruder is near the door that is with 20cm radius the alarm starts beeping and red colour LED glows.When the intruder is at a distance between  20cm and 50cm radius the yellow colour LED glows. When the intruder is at a distance more than 50cm radius the green colour LED glows.


# BLOCK DIAGRAM

![security sys block dia](https://user-images.githubusercontent.com/98822676/155678167-c7e81ee9-7864-4855-b0e5-5abf63979a36.jpg)






Whenever anyone comes in the path/range of Ultrasonic Sensor, microcontroller detects the distance of object from the sensor and if the object is in the defined range, it sends the High signal to the buzzer and buzzer starts beeping.


# FLOW DIAGRAM

![project ss](https://user-images.githubusercontent.com/98822676/156205676-f489eb76-8644-481e-906c-c63922a233a8.jpg)







# ULTRASONIC SENSOR MODULE:

Ultrasonic sensor HC-SR04 is used here to detect the presences of any person at the door. The sensor module consists of ultrasonic transmitter, receiver and the control circuit. Ultrasonic Sensor consists of two circular eyes out of which one is used to transmit the ultrasonic wave and the other to receive it.
We can calculate the distance of the object based on the time taken by ultrasonic wave to return back to the sensor. Since the time and speed of sound is known we can calculate the distance by the following formulae.

Distance = (Time x Speed of Sound) / 2.

The value is divided by two since the wave travels forward and backward covering the same distance. 


# BUZZER

A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, and confirmation of user input such as a mouse click or keystroke.

# LIGHT EMITTING DIODE

LED, in full light-emitting diode, in electronics, a semiconductor device that emits infrared or visible light when charged with an electric current. Visible LEDs are used in many electronic devices as indicator lamps, in automobiles as rear-window and brake lights, and on billboards and signs as alphanumeric displays or even full-colour posters. Infrared LEDs are employed in autofocus cameras and television remote controls and also as light sources in fibre-optic telecommunication systems.

# HIGH LEVEL AND LOW LEVEL REQUIREMENT

# HIGH LEVEL REQUIREMENTS

| ID     |                           DESCRIPTION                                                 |
|--------|---------------------------------------------------------------------------------------|
| HR01   |   Sensor should give input whether the person is near the secured area or not.       |
| HR02   |   Buzzer should beep in case of intrusion.                                            |
| HR03   |   LED should glow upon intrusion.                                                     |

------------------------------------------------------------------------------------------------

# LOW LEVEL REQUIREMENTS

| ID     |                           DESCRIPTION                                                 |
|--------|---------------------------------------------------------------------------------------|
| LR01   | Sensor output(LED Turn on or Off) will be in boolean form either 0 or 1.              |
| LR02   |   System will tell user that there is a intrusion                                     |
| LR03   |   Red LED should glow if disatnce is less than 20cm                                   |
| LR04   |   Yellow LED should glow if disatnce is between  20cm and 50cm                        |
| LR05   |   Green LED should glow if disatnce is more than 50cm                                 |    

                                               
------------------------------------------------------------------------------------------------

