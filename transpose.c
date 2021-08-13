#include <stdio.h>
#include <stdlib.h>

int* generateMatrix(int n){
    int* matrix = (int*)malloc(sizeof(int) * n * n);
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            matrix[i*n+j] = (100 * i) + j;
        }
    }
    return matrix;
}

int *

int main(){
    int n = -1;
    while(n < 1){
        scanf("Welcome to transpose.c, please enter a value %d\n", &n);
        printf("you entered %d", n);
    }
    int* matrix = generateMatrix(n);
    
    free(matrix);
    matrix = NULL;
    return 0;
}
