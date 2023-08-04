#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cs liball.a *.o
ranlab liballa.ia
