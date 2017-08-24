/*
This is an example of the "Digital" class of the MIDI_controller library.
Connect a push buttons to digital pin 2. Connect the other pin of the button to the ground, 
a pull-up resistor is not necessary, because the internal one will be used. 
This button will play MIDI note C4 when pressed.
Map it in your DAW or DJ software.

Written by tttapa, 21/08/2015
https://github.com/tttapa/MIDI_controller
*/

#include <MIDI_controller.h> // Include the library

USBMIDI_Interface midiout; // Instantiate a USB MIDI output

const uint8_t velocity = 0b1111111; // Maximum velocity (0b1111111 = 0x7F = 127)
const uint8_t C4 = 60;              // Note number 60 is defined as middle C in the MIDI specification

// Create a new instance of the class 'Digital', called 'button', on pin 2, that sends MIDI messages with note 'C4' (60) on channel 1, with velocity 127
Digital button(2, C4, 1, velocity);

void setup()
{
  startMIDI(); // Initialise the MIDI output connection
}

void loop()
{
  // Refresh the button (check whether the button's state has changed since last time, if so, send it over MIDI)
  button.refresh();
}
