/**
 * @file 1_HelloWorldInC.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief World first code, Hello, World!
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 6:05AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // cout<<"Hello, World!\n"<<s<<endl;
    printf("Hello, World!\n%s\n", s);
    return 0;
}
