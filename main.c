/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int N = 5;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= N; i++) {
        for(int j = N; j >= i ; --j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
