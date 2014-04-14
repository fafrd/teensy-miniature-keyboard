# teensy-miniature-keyboard

Tiny keyboard using a CM Storm keyboard switch tester and a Teensy microcontroller. Inspired by http://www.reddit.com/r/MechanicalKeyboards/comments/1v80l7/i_turned_my_cm_storm_switch_tester_into_a/

Wired using a Teensy++ 2.0. Wiring is similar to this image, although I used different pins. http://imgur.com/gw4xQIW

Currently the mapping, from left to right, is pageup /up key / pagedown (on the top row), and left key / down key / right key (on the bottom row).

To set it up on your own, just put the contents of switchtester.ino into your own sketch in the Arduino IDE. Then go Tools> Board> Teensy++ 2.0 and Tools> USB Type> Keyboard + Mouse + Joystick. (You'll need to install the teensy extensions if you haven't already, http://www.pjrc.com/teensy/td_download.html).

## how it works

The code is self-explanatory and can be modified easily for any key. The keypress function takes in a key, sends a signal to the PC for 1 millisecond if it's being pressed, then checks if it is still being pressed.
