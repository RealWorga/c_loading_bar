# Simple Progress Bar Loader in C

This repository contains a simple C program that displays a progress bar in the console for a duration of 10 seconds. The progress bar updates every half second, providing a visually appealing way to represent the loading status of an operation.

## Features

* Customizable total duration and steps for the progress bar
* Compatible with Windows systems
* Easy to integrate into other projects

## Installation

To use this program, follow these steps:

1. Clone the repository to your local machine:
<pre>
git clone https://github.com/RealWorga/c_loading_bar.git
</pre>

2. Navigate to the project directory:
<pre>
cd c_loading_bar
</pre>

3. Compile the C program using a C compiler such as GCC:
<pre>
gcc -o progress-bar-loader cool_loading_bar.c
</pre>

## Usage

To run the progress bar loader, simply execute the compiled binary:
<pre>
./progress-bar-loader.exe
</pre>

You should see the progress bar updating in the console for 10 seconds, like this:
<pre>
Loading...
[##..................] 10%
</pre>

Once the progress bar reaches 100%, the program will display "Loading complete!" and exit.

## Customization

You can easily customize the duration and steps of the progress bar by modifying the `total_duration` and `steps` variables in the `main.c` file.

For example, if you want the progress bar to last for 5 seconds and update every 0.25 seconds, you would update the variables like this:

<pre>
int total_duration = 5000; // 5 seconds in milliseconds
int steps = 20;
</pre>

After modifying the variables, recompile and run the program to see the changes take effect.
