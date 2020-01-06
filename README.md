# Monty

### This is a Monty bytecode interpreter for Holberton School created by Juan Buitrago

#### COMPILATION

To compile the Monty interpreter you have to do it as follows:

> gcc -Wall -Werror -Wextra -pedantic \*.c -o monty

#### USAGE

To use the interpreter you have to call it as follows:

> ./monty [BYTECODE_FILE]

#### OPTIONS

The current instructions the interpreter handles are the following:

* push - pushes an integer to the stack. Usage: >push [integer]
* pall - prints the stack completely. Usage: >pall
* pint - prints the top element of the stack. Usage: >pint
* pop - deletes the top element of the stack. Usage: >pop
* swap - swaps the first two elements. Usage: >swap
* nop - does nothing. Usage: >nop
* add - adds the first two elements and merges them. Usage: >add
* sub - subtracts the first element from the second. Usage: >sub
* mul - multiplies the first two elements. Usage: >mul
* div - divides the second element by the first. Usage: >div
* mod - returns the remainder of div. Usage: >mod

#### DESCRIPTION

Monty is a language that is written in bytecode. The monty bytecode contains exactly one instruction per line; if more than one instruction is given in a line, the other instructions will be ignored. It can contain whitespaces in the lines and even empty lines that the interpreter ignores. The bytecode can be commented by using the hash (#) sign. The standard is for the bytecode to be written in a .m file; however, other extentions can also be passed to the interpreter.

If the interpreter encounters any sort of error it will display it along with the line number that the error was found in.

#### AUTHOR

Juan Buitrago (@juanfe9118)
