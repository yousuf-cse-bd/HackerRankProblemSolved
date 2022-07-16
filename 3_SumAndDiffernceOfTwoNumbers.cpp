/**
 * @file 3_SumAndDiffernceOfTwoNumbers.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Two integers and Two real number sum and sub individually
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 6:37AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n1, n2, n3;
    float f1, f2, f3;
    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &f1, &f2);
    n3 = n1 + n2;
    printf("%d", n3);
    n3 = n1 - n2;
    printf(" %d\n", n3);
    f3 = f1 + f2;
    printf("%0.1f", f3);
    f3 = f1 - f2;
    printf(" %0.1f\n", f3);

    return 0;
}
