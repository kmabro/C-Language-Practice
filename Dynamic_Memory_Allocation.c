#include <stdio.h>
#include <stdlib.h>
int main()
{

    /***** malloc *****/

    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3] = 4;
    // ptr[4] = 5;

    // for(int i=0; i<5; i++){
    //     printf("%d\n", ptr[i]);
    // }

    // float *ptr;
    // ptr = (float *) malloc(5 * sizeof(float));

    // ptr[0] = 1;
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3] = 4;
    // ptr[4] = 5;

    // for(int i=0; i<5; i++){
    //     printf("%.2f\n", ptr[i]);
    // }

    /***** calloc *****/

    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));

    // for(int i=0; i<5; i++){
    //     printf("%d\n", ptr[i]);
    // }

    // int *ptr;
    // int n;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // ptr = (int *) calloc(n, sizeof(int));

    // for(int i=0; i<n; i++){
    //     printf("%d\n", ptr[i]);
    // }

    /***** free *****/

    // int *ptr;
    // int n;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // ptr = (int *)calloc(n, sizeof(int));

    // for(int i=0; i<n; i++){
    //     printf("%d\n", ptr[i]);
    // }

    // printf("\n\n\n");

    // free(ptr);

    // ptr = (int *)calloc(2, sizeof(int));

    // for(int i=0; i<2; i++){
    //     printf("%d\n", ptr[i]);
    // }

    // free(ptr);

    /***** realloc *****/

    // int *ptr;
    // ptr = (int *)calloc(5, sizeof(int));

    // printf("Enter numbers(5): ");
    // for(int i =0; i<5; i++){
    //     scanf("%d", &ptr[i]);
    // }

    // ptr = realloc(ptr, 8);

    // printf("Enter numbers(8): ");
    // for(int i =0; i<8; i++){
    //     scanf("%d\n", &ptr[i]);
    // }

    // for(int i=0; i<8; i++){
    //     printf("number %d is %d\n",i, ptr[i]);
    // }

    // int *ptr;
    // ptr = (int *)calloc(5, sizeof(int));

    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    // for(int i=0; i<5; i++){
    //     printf("%d, ", ptr[i]);
    // }
    // printf("\n");

    // ptr = realloc(ptr, 6);

    // ptr[0] = 2;
    // ptr[1] = 4;
    // ptr[2] = 6;
    // ptr[3] = 8;
    // ptr[4] = 10;
    // ptr[5] = 12;

    // for(int i=0; i<6; i++){
    //     printf("%d, ", ptr[i]);
    // }

    return 0;
}