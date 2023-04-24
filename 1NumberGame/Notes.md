# Number Guessing Game

* Creation Date: 22 July 2020
* Update:

## Description

* The program determines a random number from a range specified by the user
* The user attempts to guess the random number
* If the user's guess is within a certain range, the program lets the user know
  that their guess is "hot"
    ** Otherwise, the program says their guess is "cold"

## Details

* Range: [user low, user high]
* hot if user's guess is within: [ expectedNumber - range * 0.1, expectedNumber + range * 0.1 ]
* Round: A round is all the attempts a user makes to guess one random number. After the user guesses
correctly, a new round begins. If the user enters "x", then the game ends.


## Sequence Diagram
![](NumberGameSD.png)


## Options
* Round Details
    ** Game could have the round details
        *** Pass it by reference into a user GetRoundDetails function
        *** Both Game and User refer to a round

