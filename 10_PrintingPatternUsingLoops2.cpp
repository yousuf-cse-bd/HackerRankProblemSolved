/**
 * @file 10_PrintingPatternUsingLoops2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Printing pattern unsing loops with min technique
 * @version 0.1
 * @date 2022-09-26
 * @since MonDay; 09:25 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    short int n, rowColumn, min1, min2, min3;
    cout<<"Enter nth number here: ";
    cin>>n;
    rowColumn = (2*n)-1;
    for(register short int i = 1; i<=rowColumn; i++){
        for(register  short int j = 1; j<=rowColumn; j++){
            /*First finding max value for row-wise*/
            if(i > (rowColumn-i)){
                min1 = rowColumn - i;
            }else{
                min1 = i-1;
            }
            /*Now finding max value for column-wise*/
            if(j > (rowColumn-j)){
                min2 = rowColumn - j;
            }else{
                min2 = j-1;
            }
            /*Final max value from max1 and max2*/
            min3 = min(min1, min2);
            cout<<n-min3<<" ";
        }
        cout<<endl;
    }

    return 0;
}
