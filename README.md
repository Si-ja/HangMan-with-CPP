# Hang Man Game in C++

This is a very simple Hang Man game written in C++. Essentially it is played in the console and is as bare bones as possible.

The idea of this project was to tackle few things and learn from them:

* How to make classes and use them in C++
* How to work with multiple files (i.e. .cpp and .h)
* How to read information from text files

All of said goals where achieved. In order to play the game - navigate to the `Release` folder, make sure that you find the `HangMan.exe` and `words.txt` files. The first one is meant to start the console and allow to play the game, the second - is the source file from where the words to play hangman come from. The words originally were taken from https://www.hangmanwords.com/words

Current issues with the code solution:
* A bit messy, due to extensive presence of Getters and Setters in the `Field` class. Refactory should keep the code more organized.
