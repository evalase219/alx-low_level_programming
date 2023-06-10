#!/bin/bash
gcc -Wall -pedantic -Wetro -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
