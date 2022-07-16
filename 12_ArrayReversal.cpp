/**
 * @file 12_ArrayReversal.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array print just reversal order.
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 11:57PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n;
    scanf("%d", &n);
    int * arr = (int*) malloc(n*sizeof(int));
    for(unsigned int i = 0; i<n; i++){
        scanf("%d", (arr + i));
    }
    for(int i = n-1; i>=0; i--){
        printf("%d ", *(arr + i));
    }
    printf("\n");
    free(arr);
    return 0;
}
