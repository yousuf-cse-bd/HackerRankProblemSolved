/**
 * @file 5_PointerInc.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief It is mostly call by reference example.
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 7:17AM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstdio>
#include <cmath>

void update(int *a, int *b) {
    // Complete this function
    *a = *a + *b;
    *a = abs(*a);
    *b = *a - *b - *b;
    *b = abs(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}