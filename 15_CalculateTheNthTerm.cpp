/**
 * @file 15_CalculateTheNthTerm.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Just recursion function
 * @version 0.1
 * @date 2022-07-17
 * @since Sunday, 9:05 AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if(n == 1){
        return a;
    }
    else if(n == 2){
        return b;
    }
    else if(n == 3){
        return c;
    }else{
        return (find_nth_term(n-1, a , b , c)+find_nth_term(n-2, a, b, c) + (find_nth_term(n-3, a, b, c)));
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
