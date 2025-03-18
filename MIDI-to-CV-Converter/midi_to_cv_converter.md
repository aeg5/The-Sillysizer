# MIDI to CV Converter
The MIDI to CV converter converts note data coming from messages into a 1V/octave control voltage. This module remained on a breadboard. 

## Dependencies
LoopMIDI and Hairless MIDI.

## Powering
Be sure to power the power buses on the breadboard according to the diagram below or else the module can be damaged. They can be connected with male to female jumper wires to the power bus. 

![MIDI to CV converter](https://github.com/user-attachments/assets/5ff0dacb-fb30-41da-b1c8-aeb6bf8210ba)
## Software setup
1. Have loopMIDI running. Add a new port to loopMIDI if there’s none.
2. Go into the settings of the plugin or DAW of choice to connect the MIDI output to loopMIDI. The example below is with the VST, Dexed. 
3. Open Hairless MIDI. Ensure that the Arduino Uno is plugged into the computer with a USB B to A cable. Select “Arduino Uno” for “Serial port” and “loopMIDI Port” for “MIDI In”. 
4. Uncheck and check the “Serial <-> MIDI Bridge On” box if it was on initially.
5. If notes are pressed on the plugin or DAW, then they should play on the VCO.

### Troubleshooting setup
If this is not working, check if the TX and RX pins on the Arduino are blinking.
If they are, the Arduino is successfully receiving the MIDI messages. There might be a wiring issue. 
If they are not, the Arduino is not receiving the MIDI messages. There may be an issue with setting up the software. Be sure to try unchecking and checking the Serial <-> MIDI Bridge On box. Also, look at the messages in Hairless MIDI. 
