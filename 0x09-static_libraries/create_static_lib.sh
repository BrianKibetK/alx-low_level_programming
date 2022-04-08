#!/bin/bash
gcc -c -Wall -Werror -Wextra 0-isupper.c 0-strcat.c 1-isdigit.c 1-strncat.c 2-strlen.c 3-islower.c 3-strcmp.c 4-isalpha.c 5-strstr.c 9-strcpy.c _putchar.c
ar -rc liball.a *.o
ranlib liball.a
