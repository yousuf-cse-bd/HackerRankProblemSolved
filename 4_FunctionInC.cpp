/**
 * @file 4_FunctionInC.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Max value from of all four numbers.
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 7.00AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int maxValue = 0;
    maxValue = max(maxValue, max(a, max(b, max(c, d))));

    return maxValue;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
