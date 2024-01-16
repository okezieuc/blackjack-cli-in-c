# Blackjack in C

A C implementation of a Blackjack project that was assigned in the Introduction to Computing class in my freshman year.

## Usage Guide
The instructions below should work on MacOS and other Unix-based operating systems.
[This article](https://unstop.com/blog/how-to-run-c-program) could be a helpful 
guide on how to compile and run C code on Windows.

```bash
# compiles the code into a binary file `main`
gcc -o main main.c
# run the compiled code
./main
```

## Sample Gameplays
```
-----------
YOUR TURN
-----------
Drew a 3
Drew a 6
You have 9. Hit (y/n)? y
Drew a 4
You have 13. Hit (y/n)? y
Drew a 3
You have 16. Hit (y/n)? n
Final hand: 16.
-----------
DEALER TURN
-----------
Drew a 5
Drew an Ace
Dealer has 16.
Drew a 6
Final hand: 22.
BUST!
-----------
GAME RESULT
-----------
Dealer wins!
```

```
-----------
YOUR TURN
-----------
Drew a Jack
Drew a Queen
You have 20. Hit (y/n)? n
Final hand: 20.
-----------
DEALER TURN
-----------
Drew a 9
Drew a 6
Dealer has 15.
Drew a 3
Final hand: 18.
-----------
GAME RESULT
-----------
You win!
```