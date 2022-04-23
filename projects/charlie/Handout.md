# Challenge: Wanna place an alpha-bet?

This challenge will require you to draw alphabets, blink LEDs and blast some tunes.

## Prerequisites

- The utility functions in `include/Utilities.h` will be needed to solve this challenge. Look at how they are used in the `examples/` folder and their descriptions for more detailed explanations about what they do.
- The concepts of variables, loops and branches should be clear. Below is a snippet you can refer to, covering all 3 concepts.

```cpp
void function() {
    bool isLedOn = false;
    while(true) { // Loop as long as the condition is true;
        if(isLedOn) {
            turnLedOff();
            isLedOn = false;
        } else {
            turnLedOn();
            isLedON = true;
        }
    }
}
```

- The Modulo operator(`%`): Simple explanation covered [here](https://www.reddit.com/r/explainlikeimfive/comments/1xws9k/comment/cffanex).

```cpp
5 % 2 = 1;
5 % 3 = 2;
23 % 5 = 3;
```

- Remember to use the `waitSeconds` to add some time between repetitions if needed to readjust the bot to a good starting position.

## Levels

Please inform an organizer once you are done with any of the levels. Solutions are to be written out in `projects/alpha/alpha.ino`.

### Level 1

1. Let's start by ensuring the `begin()` function is called in `setup()` so the hardware is completely ready to play with.
2. Turn the LED on.
3. Now make the robot draw the alphabet 'V' on the ground. Ensure that the LED is on.
4. Once the drawing is complete, turn the LED off.

### Level 2

1. Ensure everything in Level 1 is complete and checked by an instructor.
2. That 'V' we drew earlier is lonely, let's draw 5 of them now.
3. On every odd 'V', play the mario tune, on every even 'V', blink the LED.

## Extra credit

You have functionality to move, turn, blink LEDs and play music. Can you come up with something interesting to make your robot do. Discuss with your group and the instructors. The most creative group wins a special prize!
