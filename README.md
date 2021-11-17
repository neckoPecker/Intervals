# Intervals

## About
This is just a simple pomodoro app that you can run on your linux terminal.

**Windows is not supported**...*yet*.

## Building

You will need Make and CMake installed on your system to build this.
You will also need access to the `notify-send` command.

1. Clone this repository: `git clone https://github.com/neckoPecker/Intervals.git`
2. Go to the new folder and make a new folder called `build`.
3. Go into the `build`and run `cmake ..`
4. Then, either run `cmake --build .` or `make`

An executable called `intervals` will be made. If you plan on actually using it, 
then I would make a soft symlink to `~/.local/bin` (assuming you have this directory
in your PATH) so that you can run the program whenever you want.

## Running

When you run the program, it will prompt you to enter a number (for active time)
and then another (for break time). After these inputs, the program will display
a countdown (in seconds). When the timer is done, it will send a notification
to your desktop. The same thing happens with the break timer. This program
will loop infinitely between these two timers until the user decides to quit
(`Ctrl+C`).
