#include<stdio.h>

void main() {
    int arr[2][4] = { {1,2,3,4},{5,6,7,8}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    
}