#include <stdio.h>
#include "compress.h"
#include "decompress.h"

// Main:
// - Runs either compress.c or decompress.c 
//   depending on the user input (number of args)
// - Prints the answer

int main(int argc, char **argv) {
    char biStr[1000];
    char nums[1000];
    char strF[1000];
    char strAlph[1000];
    char padded[1000];
    if (strcmp(argv[1], "-c") == 0){ 
        binaryC(argv[2], biStr);
        numAnswer(biStr, nums, argv[2]);
        printf("%s\n", nums);
    } else{
        int nums[1000];
        for (int i = 0; i < argc - 3; i++) {
            nums[i] = atoi(argv[i + 3]);
        }    
        binaryD(nums, argc-3, strF);
        char *paddedStr = pad(strF, padded);
        alphabet(paddedStr, strAlph, argv[2]);
        printf("%s\n", strAlph);
    }
return 0;
    
}