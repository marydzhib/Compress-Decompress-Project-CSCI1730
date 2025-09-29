#include "compress.h"

char *binaryC(char str1[1000], char str2[1000]){
    str2[0]='\0';

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == 'A') strcat(str2, "00");
        else if (str1[i] == 'T') strcat(str2, "01");
        else if (str1[i] == 'C') strcat(str2, "10");
        else if (str1[i] == 'G') strcat(str2, "11");
    }

    while (strlen(str2) % 8 != 0) {
        strcat(str2, "0");
    }
    
    return str2;
}


char *numAnswer(char *strOrig, char *strF, char *original) {
    char temp[1000]; 
    strF[0] = '\0';
    sprintf(temp, "%lu", strlen(original)); 
    strcat(strF, temp); 
    strcat(strF, " "); 
    
    for(int i = 0; i<strlen(strOrig); i+=8){
        int answerDec = 0;
        for (int x = 0; x < 8; x++) {
            if (i + x < strlen(strOrig)) {
                answerDec <<= 1; // shift binary representation left by 1 (multiply by 2 for decimals)
                if (strOrig[i + x] == '1'){ 
                    answerDec |= 1; // if the strOrig bit is 1, add 1 to the decimal number ( replace last bit with 1 in binary)
                }
            }
        }
        
        char temp[4];          
        sprintf(temp, "%d", answerDec); 
        strcat(strF, temp);  
        strcat(strF, " ");   
    }

    return strF;
}

