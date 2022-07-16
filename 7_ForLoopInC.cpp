/**
 * @file 7_ForLoopInC.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple for loop and its simple application
 * @version 0.1
 * @date 2022-07-16
 * @since Saturday, 8:30PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int a, b;
    // a = 8;
    // b = 11;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(int i = a ; i<=b;i++)
      {
        if(0<i && i<=9)
        {   if(i == 1)
            {
                printf("one\n");
                // continue;
            }
            else if(i == 2)
            {
              printf("two\n");
            //   continue;  
            }
            else if( i== 3)
            {
                printf("three\n");
                // continue;
            }
            else if(i == 4)
            {
                printf("four\n");
                // continue;
            }
            else if(i == 5)
            {
                printf("five\n");
                // continue;
            }
            else if(i == 6)
            {
                printf("six\n");
                // continue;
            }
            else if(i == 7)
            {
              printf("seven\n");
            //   continue;  
            }
            else if(i == 8)
            {
                printf("eight\n");
                // continue;
            }            
            else if(i == 9)
            {
                printf("nine\n");
            // continue;
            }
        }
        if(i > 9)
        {
            if(i % 2  == 0)
            printf("even\n");
            if(i % 2 == 1)
            printf("odd\n");
        }  
        
      }
    return 0;
}
