#include <stdio.h>
#include <stdlib.h>

int* generateMatrix(int n){
    int* matrix = (int*)malloc(sizeof(int) * n * n);
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matrix[i*n+j] = (100 * i) + j;
        }
    }
    return matrix;
}

void printMatrix(int* matrix, int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%3d ", matrix[n*i+j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int* matrix, int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            int temp = matrix[n*i+j];
            matrix[n*i+j] = matrix[n*j+i];
            matrix[n*j+i] = temp;
        }
    }
}

int main(){
    int n = -1;
    printf("Welcome to transpose.c, please enter a matrix size n:\n");
    scanf("%d", &n);
    while(n < 2){
        printf("Please enter a value greater than 1 to see the full item \n");
        scanf("%d", &n);
    }
    int* matrix = generateMatrix(n);
    printMatrix(matrix, n); 
    
    printf("now transposing that matrix\n");

    transposeMatrix(matrix, n);
    printMatrix(matrix, n);

    free(matrix);
    matrix = NULL;
    return 0;
}
