## This is exercise repo for 'The C Programming Language. 2nd Edition'

# Compiling tools

    gcc [name of file] --to compile

# What is EOF?

The value of EOF is -1 because it has to be different from any return value from getchar that is an actual character. So getchar returns any character value as an unsigned char, converted to int, which will therefore be non-negative.

#### If you're typing at the terminal and you want to provoke an end-of-file, use CTRL-D (unix-style systems) or CTRL-Z (Windows).

Definition refers to the place where the variable is created or assigned storage;

Decloration refers to the place where the nature of the variable is tated but no storage is allocated
