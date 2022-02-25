# DOOR SECURITY SYSTEM
Today we are adding one more Security Alarm in our list which is based on Ultrasonic Sensor. This Arduino Controlled Door alarm can be installed near the door to detect the presence of anybody at the door. Whenever somebody comes in the range of Ultrasonic sensor, buzzer starts beeping. You can adjust the sensor detection range according to your door. This system can also serve the purpose of Motion Detector.

# BLOCK DIAGRAM



<mxfile host="app.diagrams.net" modified="2022-02-25T07:53:49.503Z" agent="5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36" etag="7zx5VRaGgmLifD-8Uwlc" version="16.6.4" type="device"><diagram id="T8qyj7dYyYNkdwIHsvDU" name="Page-1">7VjLTuMwFP2aSjMLRrHzKsu2vBYgkNAItm7iJhZOnHEc2vL1YzfOw0lKS6HAglRqnGv7+vqce26djuxZsrrkKItvWIjpCFrhamSfjSAE9tiRN2VZlxYfnJaGiJNQD2oM9+QFa6OlrQUJcW4MFIxRQTLTGLA0xYEwbIhztjSHLRg1V81QhHuG+wDRvvWBhCIurWPoN/YrTKK4Whl4en8JqgbrneQxCtmyZbLPR/aMMybKVrKaYarAq3Ap511s6a0D4zgV+0wgj7enV4+Js2bh9a0TPeSFj0+0l2dEC73hEfSo9DeNHRWzWGsgvH+FCnS6YKk4yTc0TeQA4GarplO2In3f+MgzlA56maPgKeKsSMOTgFHGS2c8mv+CrjtSG5nJ7077d3+hCQ8LkjLZf0MCzmQSCM4oxbyKQMJRBmEGJs1qf5URGkHCTWBYwWbJ7mVMBL7PUKB6lzLLFTgiofIJKEAIpbNyD3KuvXDVR+1dRvKEWz3e5tIQtuzlVcfxjLnAq60cgzpzpOQwS7DgazlET7AdLTetNlAl37LJXeBoW9zKW+hrI9J6iWrfTUrJhs6qN2SYPZBhHbylMjLVXFC8mijNSjBwGurmWUBRnpPAhN3kSEGqawdQ4FfbBaB0pfvcP2BcA43DnvJ3wtyC0R1AsbJxTJEgz6b7IWT1CneMyIVrFqFrsgidDjk5K3iA9ay25DuOuunQcyQQj7DoOdoQXW/7cO6dHvd/qeAoZ6mkE3ooUVpK53nWkuacV7rMcZpLkWxXJ9itTormmE7ratOS3cXmGsidzbNeTrlAPKjS5xW5bxP19jLwAXIHtmXyCwbkDgcS1TuW2t0e45NADJBYSb5IaDnAniokiPzhvVaU3bGcCMJSOWTOhGBJa8CEkkh1CNYhmxWCklSCXR0FrMMy4AOYgR1irD4x9mfy4n1FFf7uddYZO8MsvbXOuv4OR0eus36P3evzs/cdaw4pnB9WGs0S/H41ur4pRzDe81jkHkuPpz963K1H+9Bzjzu2Xnd0ZD1WP8MteqfFywt+7TBzJE12DjPf6m2lR9PQ8eVTZQmG3od/dNk5zYwPlGXXT300/SxZwh67d2ypVGnlRZbR9beV55e8XdieSZez58tFt9juoU752PwRVtLd/J1on/8H</diagram></mxfile>


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


