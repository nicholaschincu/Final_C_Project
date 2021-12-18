# Final_C_Project - Project Neptune
By Nicholas Chin and Hyungkyu Lee

# What does this project do?
Visualizing data and models are very difficult in C compared to Python and other programming softwares. We wanted to learn more about how visualization in C works to get a better grasp of it for not only future reference, but to learn how to apply to other applications. We decided what better thing to visualize than our very own solar system, specifically the eight planets. This project is to visualize the the planets of our solarsystem revolving around the sun. The planetary positions will change on a 30-day time basis in an eliptical shape by using mathematical equations that incorporate pi, sin, and cos.

# Technical Description
- Our first task was to define the revolutions of the planets using mathematical equations in the math.h library, specifically sin and cos. We labeled a number (0-7) for each planet (Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, and Neptune), respectivelly so that we can assign a period for each planet's revolution. *based on a 30-day increment*
- In order to visualize our data, we used the ncurses library to allow us to write text-based user interfaces in a terminal-independent manner. In doing so, it provides functions to create windows for us to display our solar system. 
- We used move() to set the number of rows and columns in which each planet will move given their parameters of the periods as well as to determine the specific scale we wanted our solar system to be. We then used refresh() and sleep() to suspend its execution temporarily for a period of time by the function parameter to give the planets a time elapse to change positions.
- Finally, to display an open screen for the planets and the sun to be displayed, we used initscr(), cbreak(), and keypad(stdscr, TRUE). At the end, we added endwin() to restore the terminal after the curses activity. endwin() clears any output to the terminal and moving the cursor back to the last line of the screen.

# Screenshots of it working
