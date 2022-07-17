/**
 * @file 14_DigitFrequency.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculate digits frequency using complex array
 * @version 0.1
 * @date 2022-07-17
 * @since Sunday, 7:56 AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Note: We can use memset() to set all values as 0 or -1 for integral data types also.
It will not work if we use it to set as other values.
The reason is simple, memset works byte by byte.*/
int main(int argc, char const *argv[])
{
    /* code */
    char *s;
    s = (char*) malloc(1024 * sizeof(char));
    scanf("%s", s);
    // s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    int digitFrequency[10];
    memset(digitFrequency, 0, sizeof(digitFrequency));
    for(unsigned int i = 0; i < len; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            digitFrequency[s[i] - '0']++;
        }
    }
    for(unsigned int i = 0; i<10; i++){
        printf("%d ", digitFrequency[i]);
    }
    printf("\n");
    return 0;
}
