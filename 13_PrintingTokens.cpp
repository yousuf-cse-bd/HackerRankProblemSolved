/**
 * @file 13_PrintingTokens.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Line to word, printing tokens
 * @version 0.1
 * @date 2022-07-17
 * @since Sunday, 12:14 AM
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    //Write your logic to print the tokens of the sentence here.
    for(unsigned int i = 0; s[i] != '\0'; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            printf("\n");
        }else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
    free(s);
    return 0;
}