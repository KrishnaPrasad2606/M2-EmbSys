# DOOR SECURITY SYSTEM
Today we are adding one more Security Alarm in our list which is based on Ultrasonic Sensor. This Arduino Controlled Door alarm can be installed near the door to detect the presence of anybody at the door. Whenever somebody comes in the range of Ultrasonic sensor, buzzer starts beeping. You can adjust the sensor detection range according to your door. This system can also serve the purpose of Motion Detector.

# BLOCK DIAGRAM



Whenever anyone comes in the path/range of Ultrasonic Sensor, microcontroller detects the distance of object from the sensor and if the object is in the defined range, it sends the High signal to the buzzer and buzzer starts beeping.


# ULTRASONIC SENSOR MODULE:

Ultrasonic sensor HC-SR04 is used here to detect the presences of any person at the door. The sensor module consists of ultrasonic transmitter, receiver and the control circuit. Ultrasonic Sensor consists of two circular eyes out of which one is used to transmit the ultrasonic wave and the other to receive it.
We can calculate the distance of the object based on the time taken by ultrasonic wave to return back to the sensor. Since the time and speed of sound is known we can calculate the distance by the following formulae.

Distance = (Time x Speed of Sound) / 2.

The value is divided by two since the wave travels forward and backward covering the same distance. 


# BUZZER

A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include alarm devices, timers, and confirmation of user input such as a mouse click or keystroke.

# LIGHT EMITTING DIODE

LED, in full light-emitting diode, in electronics, a semiconductor device that emits infrared or visible light when charged with an electric current. Visible LEDs are used in many electronic devices as indicator lamps, in automobiles as rear-window and brake lights, and on billboards and signs as alphanumeric displays or even full-colour posters. Infrared LEDs are employed in autofocus cameras and television remote controls and also as light sources in fibre-optic telecommunication systems.

