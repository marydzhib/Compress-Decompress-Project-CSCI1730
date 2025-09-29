#ifndef COMPRESS_H
#define COMPRESS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Converts 'DNA string' letters into a binary number string
// Adds 0's to the end if the length of string is not a multiple of 8 
char *binaryC(char str1[1000], char str2[1000]);

// Converts the binary number into the answer string with the 
// first number being the length of the DNA string 
// and the rest being decimal representations of the binary
char *numAnswer(char *strOrig, char *strF, char *original);

#endif