#ifndef DECOMPRESS_H
#define DECOMPRESS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Converts the decimal number input by the user into a binary number string
char *binaryD(int num[], int lentgh, char str[1000]);

// Pads the binary string with 0's at the end if it is not
// a multiple of 8
char *pad(char str[], char padded[1000]);

// Converts the binary string into a 'DNA string' using letters A,T,C,G
char *alphabet(char orig[], char str[1000], char arg[]);


#endif