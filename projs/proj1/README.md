# Maze Exploitation

*You may work individually or in groups of up to four on this assignment.
To receive credit, demonstrate your
completed program over video conference or create a tag called `proj01`
push your code (and tag) up to Bitbucket and submit the hash to D2L prior to
class on the due date.*


## Summary

Mazes are fun puzzles to solve.  Often, when looking at the maze from above, it
is easier to solve then when inside the maze.  We will use some of the
techniques that we have developed in the past few labs to make a application
that allows a character to explore a maze from inside and above using two modes
**camera view** and **birds eye view**.

In camera view the user sees the maze from the view point of the character
inside the maze.  We can simulate this effect by placing the camera at the
character's location and constructing a look at matrix for where the character
is looking.  You may implement the movement with a first person shooter
controller (mouse controls where the camera is looking and wasd control
forward/left/back/right movement) or you may design your own (you do NOT need to
use the mouse).  But, you program must provide a way for the character to move
around the maze in 2D and look around in the pitch and yaw directions.  You do
not need to implement any sort of collision detection (so your character can
walk through walls), but you can implement collision detection for extra credit.

Birds eye view allows you to see the maze from above.  You should denote the
location of the character and be able to control the character's movement, for
example with the arrow keys.  You can simulate looking at the maze from above by
placing the camera above the maze and using an orthographic projection.  If you
show only part of the maze, you should provide a way to for the user to pan the
scene so that they can see the entire maze.  Or you can setup your projection
matrix so that the maze fills the screen.

The user should be able to switch between the two view modes by pressing the
space bar.

Your character does not need to be anything special, but if you would like to
add some flair, you may.  In camera view, you can put the camera directly behind
the character for a neat effect.  I have supplied a set of simple characters in
`models/`that you can use if you like.  They are `obj` file format.  You can
receive extra credit for loading in and rendering a character in camera mode.
It can also a lot of fun to trade mazes with your friends.  You can also receive
extra credit if you load your mazes from a file. (I would suggest storing your
mazes in obj format as well).

## Required Materials

Your proj1 directory must include:

* All source code for the completed program.
* A screenshot of your program  in camera view and in birds eye view.
* A README.md file with any necessary instructions for using your program.

## Detailed Requirements

*Your program must*

*Be an original program written by you.*

You may use code from labs as a starting point. You may talk with other students
about the program, but looking at their code is not allowed.  You are welcome to
use code that I have provided from previous labs. But, if you are using code I
provided, you will learn more if you use my code as a direction for your own
library.  You are NOT allowed to use GLM for this project.

*Implement a controller to move your camera and character.*

You are free to implement however you choose the only constraints are, in camera
mode, you must implement a way for the character to move around the maze in 2D
and look around in the pitch and yaw directions.  In birds eye view mode, you
must provide a way to for the user to see the entire maze, the current location
of the character, and move the character.

*Shade the walls of your maze using diffuse, specular and ambient lighting.*

Phong shading is a standard way to preview models in any 3D modeling software.
Use a light source (or multiple sources) to see as you move through your maze.
You are encouraged to incorporate other lighting and shading features such as
textures and/or normal mapping.

*A README.md file.*

Write up what your program does, and how to use it, along with any extra
information you want me to know about your program.

*Demonstrate creativity and self expression.*

Put effort into your program beyond the minimum requirements. Experiment, put
extra features in, organize your code exquisitely, it's really up to you.
Explain what you did in your README.md file.

## Point breakdown

| Points    | Description |
|-----------|-------------|
| 20        | Movement in camera view |
| 20        | Movement in birds eye view |
| 20        | Correct shading |
| 20        | Created a maze |
| 20        | General (code style, execution, creativity, self expression and README.md) |
| 20        | (EC) Implement collision detection |
| 10        | (EC) For adding methods to load models from a file |
| 10        | (EC) For rendering a character that is loaded from a file |
| 10        | (EC) For loading mazes from a file |
| *100*     | *Total points* w/ 30 possible EC points |

