# Hand-gesture-recognition using piezoelectric sensors

Deaf and mute people use sign language to communicate with each other. But they face difficulty when they have to communicate with many others like us who do not understand their language.Such limitations may increase the isolation of the deaf and dumb people from the common society. This project aims at lowering the barrier in communication by providing them with a device that can act as a smart assistant.

Smart gloves existing in the market usually use flex sensors which are very costly. The aim of this project was to make such gloves accesible to more people by reducing the cost of the sensors. The method depolyed to do this was to make use of piezoelectric sensors to sense the movement of the fingers, read them through an arduino board,  recognise the gesture and convert the text to speech and play it on a speaker.

The components used were: a pair of gloves,piezo-sensors, Arduino Mega Board, IC LM386N, capacitors, resistors, and a speaker.
The methodology is shown in fig1.

The piezosensor consists of two plates: an inner and an outer. The inner plate is connected to VCC while the reading is taken from the outer plate. It was found that piezosensors are actually very sensitive devices which show variations when there is movement or when pressure is applied to them. To ensure this sensitivity, a resistor of high value is chosen to be connected to the outer plate.
This is shown in fig2.

A pair of gloves is prepared by mounting the piezosensors on top of each finger. To accomodate for the resistors from ten piezosensors, we made a small module with resistors and connector ports soldered onto a board. 
This is shown in fig3.

The circuit for the speaker was made as shown in fig4 and the final setup is made as shown in fig5.

The simple arduino code to read the sensor values is shown in "code". The text to speech conversion was done using a library called Talkie as shown in https://github.com/going-digital/Talkie.git. Hence it is not included in this repository. 

This project is very simple, but has a lot of scope. 
Piezosensors were found to be a good replacement for the conventional sensors since they proved to be sensitive enough for our requirements. Though the particular sensors we used were bulky, sensors can be fabricated using piezomaterials and can be used as a cheap substituent in smart gloves.
In this project we have simply considered a lookup table to match the gestures to the text. However, if more sensors are mounted on each finger and the reading is taken from each of them, the exact positioning of fingers can be determined and hence any sign language can be recognised and converted to speech.
