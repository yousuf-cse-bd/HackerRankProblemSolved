/**
 * @file 10_PrintingPatternUsingLoops.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Printing pattern unsing loops
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 10:48 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n,min, min1, min2;
    cin>>n;
    unsigned int len = 2*n-1;
    for(unsigned int i = 1; i<=len; i++){
        for(unsigned int j = 1; j<=len; j++){
            min1 = (i < (len - i)) ?i - 1:len - i;
            min2 = (j < (len - j))?j - 1: len - j;
            min = (min1 < min2)?min1 : min2;
            cout<<n - min<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
