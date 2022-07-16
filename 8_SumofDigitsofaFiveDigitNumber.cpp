/**
 * @file 8_SumofDigitsofaFiveDigitNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of Digits of a Five Digit Number
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 9:57PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    unsigned int sumOfDigits = 0;
    while(n != 0){
        unsigned int digitWise = n % 10; 
        sumOfDigits += digitWise;
        n /= 10; 
    }
    printf("%d\n", sumOfDigits);
    return 0;
}
