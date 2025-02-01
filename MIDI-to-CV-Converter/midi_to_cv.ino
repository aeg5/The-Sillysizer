#include <MIDI.h>
#include <Wire.h>
#include <Adafruit_MCP4725.h>

Adafruit_MCP4725 dac;

MIDI_CREATE_DEFAULT_INSTANCE();

void handleNoteOn(byte channel, byte note, byte velocity){
  int newNote = note - 24;
  if (newNote < 0){
    newNote = 0;
  } else if (newNote*68 > 4095){
    newNote = 60;
  }
  dac.setVoltage(newNote *68, false);
  digitalWrite(13, HIGH);
}

void handleNoteOff(byte channel, byte note, byte velocity){
  digitalWrite(13, LOW);
}

void setup() {
  pinMode(13, OUTPUT);
  MIDI.begin();
  MIDI.setHandleNoteOn(handleNoteOn);
  MIDI.setHandleNoteOff(handleNoteOff);
  Serial.begin(115200);
    
  dac.begin(0x62);
  dac.setVoltage(1, false);
  
}

void loop() {
  MIDI.read();
}
