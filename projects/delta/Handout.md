# Challenge: A LED letter day

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

## Levels

Please inform an organizer once you are done with any of the levels. Solutions are to be written out in `projects/alpha/alpha.ino`.

### Level 1

1. Let's start by ensuring the `begin()` function is called in `setup()` so the bot is completely ready to go.
3. Now make the robot draw the alphabet 'N' on the ground.
4. Once the drawing is complete, play the mario tune.

### Level 2

1. Ensure everything in Level 1 is complete and checked by an instructor.
2. Write a loop that iterates from 0 to 9(inclusive of both 0 and 9).
3. If n represents the current iteration, then for every n that is
  - A multiple of 3, draw an 'N' on the ground.
  - A multiple of 2, draw an 'L' on the ground.
  - Not a multiple of either 2 or 3, blink the led.


## Extra credit

You have functionality to move, turn, blink LEDs and play music. Can you come up with something interesting to make your robot do. Discuss with your group and the instructors. The most creative group wins a special prize!

