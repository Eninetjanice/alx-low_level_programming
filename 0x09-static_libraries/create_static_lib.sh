#!/bin/bash
gcc -c -Wall -Wextra -Werror -pedantic *.c
ar -r liball.a *.o
ranlib liball.a
