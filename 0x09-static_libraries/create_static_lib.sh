#!/bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar -rc libally.a *.o
ranlib libally.a
