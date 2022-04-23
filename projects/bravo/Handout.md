# Challenge: Tri-athlon!

This challenge will involve drawing triangles with the robot with a mix of LEDs and music.

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

Please inform an organizer once you are done with any of the levels. Solutions are to be written out in `projects/bravo/bravo.ino`.

### Level 1

1. Let's start by ensuring the `begin()` function is called in `setup()` so the hardware is completely ready to play with.
2. Now turn the LED on as soon as the robot starts up.
3. Finally get the robot to draw triangles that are 3 units long repeatedly. Ensure the core logic to draw a square is in a separate function.

### Level 2

1. Ensure everything in Level 1 is complete and checked by an instructor.
2. Get the bot to draw only three triangles, then stop.
3. Before drawing the final triangle, the robot should play the mario melody.
4. Once the robot has finished its task, it should turn the LED off.

### Level 3

1. Ensure everything in Level 2 is complete and checked by an instructor.
2. Once you have finished drawing 3 triangles, its time to hit rewind! Have the robot draw one more triangle but traversing the path it came from. (for example if you made a triangle by moving the robot clockwise, you need to go anticlockwise this time).

## Extra credit

You have functionality to move, turn, blink LEDs and play music. Can you come up with something interesting to make your robot do. Discuss with your group and the instructors. The most creative group wins a special prize!
