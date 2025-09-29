#include "decompress.h"


char *binaryD(int num[], int len, char str[1000]){
    int idx = 0;
    str[0] = '\0';

    for (int i = 0; i < len; i++) {
        for (int x = 7; x >= 0; x--) {
            int bitVal = (num[i] >> x) & 1;  
            str[idx++] = bitVal + '0';
        }
    }
    str[idx] = '\0';
    return str;
}

char *pad(char str[], char padded[1000]){
    padded[0] = '\0';
int len = strlen(str);

    while (len % 8 != 0) {
        strcat(padded, "0");
        len++;
    }
    strcat(padded, str);
    return padded;

}

char *alphabet(char orig[], char str[1000], char arg[]){
    str[0]='\0';
    int num = 0;
    int length = atoi(arg);

    for (int i = 0; i < strlen(orig) && num<length; i += 2) {
        if (orig[i] == '0' && orig[i + 1] == '0') strcat(str, "A");
        else if (orig[i] == '0' && orig[i + 1] == '1') strcat(str, "T");
        else if (orig[i] == '1' && orig[i + 1] == '0') strcat(str, "C");
        else if (orig[i] == '1' && orig[i + 1] == '1') strcat(str, "G");
        num++;
    }
    return str;
}


