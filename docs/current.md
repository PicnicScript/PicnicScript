# Picnic VM Spec

## Symbols

`#` Means number constant

## Instructions

+ `PUSH`    - Push an 8 bit number onto the stack
+ `ADD`    - Pops last two numbers off of the stack, adds, pushes results
+ `HLT`    - Pops stack and returns result as an exit code