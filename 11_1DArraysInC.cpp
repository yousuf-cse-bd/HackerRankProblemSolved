/**
 * @file 11_1DArraysInC.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of array elements and the array dynamically in heap.
 * @version 0.1
 * @date 2022-07-16
 * @since Satarday, 11:39PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n, sum = 0;
    scanf("%d", &n);
    int * arr = (int*) malloc(n*sizeof(int));
    for(unsigned int i = 0; i<n; i++){
        scanf("%d", (arr + i));
        sum += arr[i];
    }
    printf("%d\n", sum);
    free(arr);
    return 0;
}
