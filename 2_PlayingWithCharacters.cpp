/**
 * @file 2_PlayingWithCharacters.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Input char, word and sentence
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 6:17AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
