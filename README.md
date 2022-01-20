# CrackerBarrelPegGame
Written in C++. This project simulates the popular Cracker Barrel peg game.

The program is still in development. It seems I have lost the completed version I had developed in which the system successfully solves and prints out winning moves to getting down to one peg (of which there are numerous combinations that obtain this goal).

# Design
The project is currently structured by creating objects for each coordinate on the Peg Board. The triangular peg board is modeled as a 2D array in which the appropriate number of spaces are obtained by using the number of columns as the row it is in. This essentially draws a diagonal in the 2D array and keeps the spaces along the diagonal for use; all other spaces in the 2D array are designated Out-Of-Bounds (OOB). There is also a function to jump, in which case three coordinates are provided: 1) The coordinate from where the peg is jumping, 2) The coordinate the peg jumped over (with a peg present), and 3) The previously empty coordinate the peg landed in. What is still lacking (but had developed earlier) is appropriate checks for each of these coordinates to be able to execute a jump and setters to update the coordinates state after a jump is committed. Also, the recursive algorithm for searching the board for available jumps and executing them iteratively is missing from the peggame.cpp file.
