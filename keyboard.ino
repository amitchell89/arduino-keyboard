#include <Button.h>

/* Simple Tone Keyboard
Gregg Horton 2011
*/
#include "pitches.h"
const int buttonPin1 = 50; // the number of the pushbutton pin
const int buttonPin2 = 51; // the number of the pushbutton pin
const int buttonPin3 = 48; // the number of the pushbutton pin
const int buttonPin4 = 49; // the number of the pushbutton pin
const int buttonPin5 = 46; // the number of the pushbutton pin
const int buttonPin6 = 47; // the number of the pushbutton pin
const int buttonPin7 = 44; // the number of the pushbutton pin
const int buttonPin8 = 45; // the number of the pushbutton pin
const int buttonPin9 = 42; // the number of the pushbutton pin
const int buttonPin10 = 43; // the number of the pushbutton pin
const int buttonPin11 = 40; // the number of the pushbutton pin
const int buttonPin12 = 41; // the number of the pushbutton pin
const int buttonPin13 = 38; // the number of the pushbutton pin
const int buttonPin14 = 39; // the number of the pushbutton pin
const int buttonPin15 = 36; // the number of the pushbutton pin
const int buttonPin16 = 37; // the number of the pushbutton pin
const int buttonPin17 = 34; // the number of the pushbutton pin
const int buttonPin18 = 35; // the number of the pushbutton pin
const int buttonPin19 = 32; // the number of the pushbutton pin
const int buttonPin20 = 33; // the number of the pushbutton pin
const int buttonPin21 = 30; // the number of the pushbutton pin
const int buttonPin22 = 31; // the number of the pushbutton pin
const int buttonPin23 = 28; // the number of the pushbutton pin
const int buttonPin24 = 29; // the number of the pushbutton pin
Button lowerOctavePin = Button(26);
Button raiseOctavePin = Button(27);
const int pinOut = 53;


// variables will change:
int buttonState1, 
    buttonState2, 
    buttonState3,
    buttonState4,
    buttonState5, 
    buttonState6,
    buttonState7,
    buttonState8,
    buttonState9, 
    buttonState10, 
    buttonState11,
    buttonState12,
    buttonState13, 
    buttonState14,
    buttonState15,
    buttonState16,
    buttonState17, 
    buttonState18, 
    buttonState19,
    buttonState20,
    buttonState21, 
    buttonState22,
    buttonState23,
    buttonState24  = 0; // variable for reading the pushbutton status
   
int octaveLevel = 0;
//// Note Variables 
int note1C[] = {NOTE_C1, NOTE_C2, NOTE_C3, NOTE_C4, NOTE_C5, NOTE_C6};
int note1CS[] = {NOTE_CS1, NOTE_CS2, NOTE_CS3, NOTE_CS4, NOTE_CS5, NOTE_CS6};
int note1D[] = {NOTE_D1, NOTE_D2, NOTE_D3, NOTE_D4, NOTE_D5, NOTE_D6};
int note1DS[] = {NOTE_DS1, NOTE_DS2, NOTE_DS3, NOTE_DS4, NOTE_DS5, NOTE_DS6};
int note1E[] = {NOTE_E1, NOTE_E2, NOTE_E3, NOTE_E4, NOTE_E5, NOTE_E6};
int note1F[] = {NOTE_F1, NOTE_F2, NOTE_F3, NOTE_F4, NOTE_F5, NOTE_F6};
int note1FS[] = {NOTE_FS1, NOTE_FS2, NOTE_FS3, NOTE_FS4, NOTE_FS5, NOTE_FS6};
int note1G[] = {NOTE_G1, NOTE_G2, NOTE_G3, NOTE_G4, NOTE_G5, NOTE_G6};
int note1GS[] = {NOTE_GS1, NOTE_GS2, NOTE_GS3, NOTE_GS4, NOTE_GS5, NOTE_GS6};
int note1A[] = {NOTE_A1, NOTE_A2, NOTE_A3, NOTE_A4, NOTE_A5, NOTE_A6};
int note1AS[] = {NOTE_AS1, NOTE_AS2, NOTE_AS3, NOTE_AS4, NOTE_AS5, NOTE_AS6};
int note1B[] = {NOTE_B1, NOTE_B2, NOTE_B3, NOTE_B4, NOTE_B5, NOTE_B6};
int note2C[] = {NOTE_C2, NOTE_C3, NOTE_C4, NOTE_C5, NOTE_C6, NOTE_C7};
int note2CS[] = {NOTE_CS2, NOTE_CS3, NOTE_CS4, NOTE_CS5, NOTE_CS6, NOTE_CS7};
int note2D[] = {NOTE_D2, NOTE_D3, NOTE_D4, NOTE_D5, NOTE_D6, NOTE_D7};
int note2DS[] = {NOTE_DS2, NOTE_DS3, NOTE_DS4, NOTE_DS5, NOTE_DS6, NOTE_DS7};
int note2E[] = {NOTE_E2, NOTE_E3, NOTE_E4, NOTE_E5, NOTE_E6, NOTE_E7};
int note2F[] = {NOTE_F2, NOTE_F3, NOTE_F4, NOTE_F5, NOTE_F6, NOTE_F7};
int note2FS[] = {NOTE_FS2, NOTE_FS3, NOTE_FS4, NOTE_FS5, NOTE_FS6, NOTE_FS7};
int note2G[] = {NOTE_G2, NOTE_G3, NOTE_G4, NOTE_G5, NOTE_G6, NOTE_G7};
int note2GS[] = {NOTE_GS2, NOTE_GS3, NOTE_GS4, NOTE_GS5, NOTE_GS6, NOTE_GS7};
int note2A[] = {NOTE_A2, NOTE_A3, NOTE_A4, NOTE_A5, NOTE_A6, NOTE_A7};
int note2AS[] = {NOTE_AS2, NOTE_AS3, NOTE_AS4, NOTE_AS5, NOTE_AS6, NOTE_AS7};
int note2B[] = {NOTE_B2, NOTE_B3, NOTE_B4, NOTE_B5, NOTE_B6, NOTE_B7};


void setup() {
// initialize the pushbutton pin as an input:
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);
pinMode(buttonPin4, INPUT);
pinMode(buttonPin5, INPUT);
pinMode(buttonPin6, INPUT);
pinMode(buttonPin7, INPUT);
pinMode(buttonPin8, INPUT);
pinMode(buttonPin9, INPUT);
pinMode(buttonPin10, INPUT);
pinMode(buttonPin11, INPUT);
pinMode(buttonPin12, INPUT);
pinMode(buttonPin13, INPUT);
pinMode(buttonPin14, INPUT);
pinMode(buttonPin15, INPUT);
pinMode(buttonPin16, INPUT);
pinMode(buttonPin17, INPUT);
pinMode(buttonPin18, INPUT);
pinMode(buttonPin19, INPUT);
pinMode(buttonPin20, INPUT);
pinMode(buttonPin21, INPUT);
pinMode(buttonPin22, INPUT);
pinMode(buttonPin23, INPUT);
pinMode(buttonPin24, INPUT);
pinMode(pinOut, OUTPUT);
//Serial.begin(9600);
}

void loop(){
  
// OCTAVE BUTTON CODE 
if(raiseOctavePin.uniquePress() && octaveLevel < 5){
  // increment octave variable
  octaveLevel = ++octaveLevel;
}
else {
}

if(lowerOctavePin.uniquePress() && octaveLevel > 0){
  // decrease octave variable
  octaveLevel = --octaveLevel;
  Serial.println(octaveLevel);
}
else {
}

// KEYBOARD BUTTON CODE  
// read the state of the pushbutton value:
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
buttonState3 = digitalRead(buttonPin3);
buttonState4 = digitalRead(buttonPin4);
buttonState5 = digitalRead(buttonPin5);
buttonState6 = digitalRead(buttonPin6);
buttonState7 = digitalRead(buttonPin7);
buttonState8 = digitalRead(buttonPin8);
buttonState9 = digitalRead(buttonPin9);
buttonState10 = digitalRead(buttonPin10);
buttonState11 = digitalRead(buttonPin11);
buttonState12 = digitalRead(buttonPin12);
buttonState13 = digitalRead(buttonPin13);
buttonState14 = digitalRead(buttonPin14);
buttonState15 = digitalRead(buttonPin15);
buttonState16 = digitalRead(buttonPin16);
buttonState17 = digitalRead(buttonPin17);
buttonState18 = digitalRead(buttonPin18);
buttonState19 = digitalRead(buttonPin19);
buttonState20 = digitalRead(buttonPin20);
buttonState21 = digitalRead(buttonPin21);
buttonState22 = digitalRead(buttonPin22);
buttonState23 = digitalRead(buttonPin23);
buttonState24 = digitalRead(buttonPin24);

// check if the pushbutton is pressed. If it is, the buttonState is HIGH:
// button 1
if (buttonState1 == HIGH) {
tone(pinOut, note1C[octaveLevel]);
} 
// button 2 
else if (buttonState2 == HIGH) {
tone(pinOut, note1CS[octaveLevel]);
}
// button 3 
else if (buttonState3 == HIGH) {
tone(pinOut, note1D[octaveLevel]);
}
// button 4 
else if (buttonState4 == HIGH) {
tone(pinOut, note1DS[octaveLevel]);
}
// button 5
else if (buttonState5 == HIGH) {
tone(pinOut, note1E[octaveLevel]);
}
// button 6
else if (buttonState6 == HIGH) {
tone(pinOut, note1F[octaveLevel]);
}
// button 7 
else if (buttonState7 == HIGH) {
tone(pinOut, note1FS[octaveLevel]);
}
// button 8
else if (buttonState8 == HIGH) {
tone(pinOut, note1G[octaveLevel]);
}
// button 9
else if (buttonState9 == HIGH) {
tone(pinOut, note1GS[octaveLevel]);
}
// button 10
else if (buttonState10 == HIGH) {
tone(pinOut, note1A[octaveLevel]);
}
// button 11
else if (buttonState11 == HIGH) {
tone(pinOut, note1AS[octaveLevel]);
}
// button 12
else if (buttonState12 == HIGH) {
tone(pinOut, note1B[octaveLevel]);
}
// button 13
else if (buttonState13 == HIGH) {
tone(pinOut, note2C[octaveLevel]);
}
// button 14
else if (buttonState14 == HIGH) {
tone(pinOut, note2CS[octaveLevel]);
}
// button 15
else if (buttonState15 == HIGH) {
tone(pinOut, note2D[octaveLevel]);
}
// button 16
else if (buttonState16 == HIGH) {
tone(pinOut, note2DS[octaveLevel]);
}
// button 17
else if (buttonState17 == HIGH) {
tone(pinOut, note2E[octaveLevel]);
}
// button 18
else if (buttonState18 == HIGH) {
tone(pinOut, note2F[octaveLevel]);
}
// button 19
else if (buttonState19 == HIGH) {
tone(pinOut, note2FS[octaveLevel]);
}
// button 20
else if (buttonState20 == HIGH) {
tone(pinOut, note2G[octaveLevel]);
}
// button 21
else if (buttonState21 == HIGH) {
tone(pinOut, note2GS[octaveLevel]);
}
// button 22
else if (buttonState22 == HIGH) {
tone(pinOut, note2A[octaveLevel]);
}
// button 23
else if (buttonState23 == HIGH) {
tone(pinOut, note2AS[octaveLevel]);
}
// button 24
else if (buttonState24 == HIGH) {
tone(pinOut, note2B[octaveLevel]);
}
else { noTone(pinOut); 
}


// ALTERNATE CODE IS NOT WORKING, TRYING TO GET ORDER OF BUTTONS PRESSED NOT TO PREVENT SOUND


// check if the pushbutton is pressed. If it is, the buttonState is HIGH:
// button 1
//if (buttonState1 == HIGH) {
//tone(pinOut, note1C[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 2 
//if (buttonState2 == HIGH) {
//tone(pinOut, note1CS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 3 
//if (buttonState3 == HIGH) {
//tone(pinOut, note1D[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 4 
//if (buttonState4 == HIGH) {
//tone(pinOut, note1DS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 5
//if (buttonState5 == HIGH) {
//tone(pinOut, note1E[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 6
//if (buttonState6 == HIGH) {
//tone(pinOut, note1F[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 7 
//if (buttonState7 == HIGH) {
//tone(pinOut, note1FS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 8
//if (buttonState8 == HIGH) {
//tone(pinOut, note1G[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 9
//if (buttonState9 == HIGH) {
//tone(pinOut, note1GS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 10
//if (buttonState10 == HIGH) {
//tone(pinOut, note1A[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 11
//if (buttonState11 == HIGH) {
//tone(pinOut, note1AS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 12
//if (buttonState12 == HIGH) {
//tone(pinOut, note1B[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 13
//if (buttonState13 == HIGH) {
//tone(pinOut, note2C[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 14
//if (buttonState14 == HIGH) {
//tone(pinOut, note2CS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 15
//if (buttonState15 == HIGH) {
//tone(pinOut, note2D[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 16
//if (buttonState16 == HIGH) {
//tone(pinOut, note2DS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 17
//if (buttonState17 == HIGH) {
//tone(pinOut, note2E[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 18
//if (buttonState18 == HIGH) {
//tone(pinOut, note2F[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 19
//if (buttonState19 == HIGH) {
//tone(pinOut, note2FS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 20
//if (buttonState20 == HIGH) {
//tone(pinOut, note2G[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 21
//if (buttonState21 == HIGH) {
//tone(pinOut, note2GS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 22
//if (buttonState22 == HIGH) {
//tone(pinOut, note2A[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 23
//if (buttonState23 == HIGH) {
//tone(pinOut, note2AS[octaveLevel]);
//} else { noTone(pinOut); 
//}
//
//// button 24
//if (buttonState24 == HIGH) {
//tone(pinOut, note2B[octaveLevel]);
//} else { noTone(pinOut); 
//}




}
