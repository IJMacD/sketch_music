//ONG LIT YIT 2013-07-20
//This following code plays happy birthday melody on Arduino
//Put Piezo Buzzer on GDN and 9 (Positive and negative are reversible)
//this project requires a Piezo Buzzer and
// an Arduino board and
//jumper wires to connect Buzzer's (+) to ~4 and (-) to GND (any GND)
//HAVE FUN

#include "saints.h"
#include "twinkle.h"
#include "birthday.h"
#include "hot_cross.h"
#include "jingle.h"

const int TUNE_SAINTS = 0;
const int TUNE_TWINKLE = 1;
const int TUNE_BIRTHDAY = 2;
const int TUNE_HOT_CROSS = 3;
const int TUNE_JINGLE = 4;

const int TUNE_COUNT = 5;

const int POT_MODE_TEMPO = 1;
const int POT_MODE_PITCH = 2;

const int speakerPin = 1;

const int buttonPin = 3;

const int potPort = 1;    // select the analog input port for the
                          // potentiometer.
                          // Note: not the same as pin number
                          // port 1 == pin 2

int potMode = POT_MODE_TEMPO;

int val = 0;

int currentTune = TUNE_SAINTS;

int     tune_count;
char*   tune_notes;
int*    tune_beats;
int     tune_tempo;

void setTune(int tuneIndex){

  switch (tuneIndex) {
    case TUNE_SAINTS:
      tune_count = saints_count;
      tune_notes = (char *)saints_notes;
      tune_beats = (int *)saints_beats;
      tune_tempo = saints_tempo;
      break;
    case TUNE_TWINKLE:
      tune_count = twinkle_count;
      tune_notes = (char *)twinkle_notes;
      tune_beats = (int *)twinkle_beats;
      tune_tempo = twinkle_tempo;
      break;
    case TUNE_BIRTHDAY:
      tune_count = birthday_count;
      tune_notes = (char *)birthday_notes;
      tune_beats = (int *)birthday_beats;
      tune_tempo = birthday_tempo;
      break;
    case TUNE_HOT_CROSS:
      tune_count = hot_cross_count;
      tune_notes = (char *)hot_cross_notes;
      tune_beats = (int *)hot_cross_beats;
      tune_tempo = hot_cross_tempo;
      break;
    case TUNE_JINGLE:
      tune_count = jingle_count;
      tune_notes = (char *)jingle_notes;
      tune_beats = (int *)jingle_beats;
      tune_tempo = jingle_tempo;
      break;
  }

  currentTune = tuneIndex;
}

void playTone(int tone, int duration) {

  for (long i = 0; i < duration * 1000L; i += tone * 2) {

     digitalWrite(speakerPin, HIGH);

     delayMicroseconds(tone);

     digitalWrite(speakerPin, LOW);

     delayMicroseconds(tone);

  }

}

void playNote(char note, int duration) {

  const char names[] = {'C', 'D', 'E', 'F', 'G', 'A', 'B',

                   'c', 'd', 'e', 'f', 'g', 'a', 'b',

                   'x', 'y' };

  const int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014,

                   956,  834,  765,  593,  468,  346,  224,

                   655 , 715 };

  const int SPEE = 5;

  // play the tone corresponding to the note name

  for (int i = 0; i < 17; i++) {

     if (names[i] == note) {
      int newDuration = duration/SPEE;

      if(potMode == POT_MODE_PITCH){
        float pitchAdjust = 0.5 + (val / 250);
        float newPitch = tones[i] * pitchAdjust;
        newDuration = (int) newPitch;
      }

       playTone(tones[i], newDuration);

     }

  }

}

void setup() {

  setTune(TUNE_SAINTS);

  pinMode(speakerPin, OUTPUT);

}

void loop() {

  for (int i = 0; i < tune_count; i++) {

    val = analogRead(potPort);    // read the value from the sensor

    int pressed = digitalRead(buttonPin);

    if(pressed == HIGH){
      setTune((currentTune + 1) % TUNE_COUNT);
      i = 0;  // Go back to the start of the tune
    }

    float tempo;

    if(potMode == POT_MODE_TEMPO){
      tempo = 50 + val / 5;
    } else {
      tempo = tune_tempo;
    }

     if (tune_notes[i] == ' ') {

       delay(tune_beats[i] * tempo); // rest

     } else {

       playNote(tune_notes[i], tune_beats[i] * tempo);

     }

     // pause between notes

     delay(tempo);

  }

}
