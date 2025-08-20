#include <stdio.h>
int main()
{

  /*
  Declare an array of 5 integers.
  Take input from the user and print the sum of all elements.
  */
  //   int arr[5];
  //   int sum = 0;
  //   printf("Enter 5 integers: ");
  //   for(int i = 0; i < 5; i++){
  //     scanf("%d", &arr[i]);
  //     sum += arr[i];
  //   }
  //   printf("Sum of all elements: %d\n", sum);

  /*
  Write a program to find the largest and smallest element in an array of integers.
  */
  // int arr[5];
  // int largest;
  // int smallest;
  // printf("Enter 5 integers: ");
  // for(int i = 0; i < 5; i++){
  //   scanf("%d", &arr[i]);
  // }

  // printf("You entered: ");
  // for(int i = 0; i < 5; i++) {
  //     printf("%d ", arr[i]);
  // }
  // printf("\n");

  // largest = smallest = arr[0];

  // for(int i = 0; i<5; i++){
  //   if(arr[i] > largest){
  //     largest = arr[i];
  //   }
  //   if(arr[i] < smallest){
  //     smallest = arr[i];
  //   }
  // }

  // printf("Largest element: %d\n", largest);
  // printf("Smallest element: %d\n", smallest);

  /*
  Take input of marks of 10 students into an array.
  Calculate and print the average marks.
  */
  // int marks[10];
  // for (int i =0; i<10; i++){
  //   printf("Enter marks of student %d: ", i+1);
  //   scanf("%d", &marks[i]);
  // }

  // int sum = 0;
  // for (int i =0; i<10; i++){
  //   sum += marks[i];
  // }

  // int avg = sum/10;
  // printf("Average marks: %d\n", avg);

  /*
  Search for an element in an array (Linear Search).
  Print whether it was found and at which index.
  */
  // int arr[] = {1, 2, 3, 4, 5};
  // int search;
  // printf("Enter the element to search: ");
  // scanf("%d", &search);

  // int found = 0;
  // for(int i = 0; i < 5; i++){
  //     if(arr[i] == search){
  //         printf("Element found at index %d\n", i);
  //         found = 1;
  //         break;
  //     }
  // }

  // if(!found){
  //     printf("Element not found\n");
  // }

  /*
  Declare a 2D array (matrix) of size 3x3.
  Take input from the user and print the matrix in proper 3x3 format.
  */
  // int arr[3][3];
  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     printf("Enter element at position (%d, %d): ", i, j);
  //     scanf("%d", &arr[i][j]);
  //   }
  // }

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     printf("%d ", arr[i][j]);
  //   }
  // }

  /*
  Write a program to add two 2D arrays (matrices) of size 2x2.
  */
  // int arr1[2][2] = {{1, 2}, {3, 4}};
  // int arr2[2][2] = {{5, 6}, {7, 8}};
  // int arr3[2][2];
  // for(int i = 0; i < 2; i++){
  //   for(int j = 0; j < 2; j++){
  //     arr3[i][j] = arr1[i][j] + arr2[i][j];
  //   }
  //   printf("\n");
  //   for(int j = 0; j < 2; j++){
  //     printf("%d ", arr3[i][j]);
  //   }
  // }

  /*
  Write a program to accept marks of five students in an array and print them
  on the screen.*/
  // int marks[5];
  // printf("Enter marks of 5 students: ");
  // for(int i=0; i<5; i++){
  // scanf("%d",&marks[i]);
  // }
  // printf("\n\nMarks are: \n");
  // for(int i=0; i<5; i++){
  // printf("%d",marks[i]);
  // printf("\n");
  // }

  /*
  Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)
  points to the third element where ptr is a pointer pointing to the first element
  of the array.
  */
  // int a[] = {1,2,3,4,5,6,7,8,9,10};
  // int* ptr = a;
  // printf("The value at address %u is: %d\n",ptr+2,*(ptr+2));

  /*
  Write a program to create an array of 10 integers and
  store multiplication table of 5 in it.
  */
  // int a[10], i;
  // for(i = 0; i < 10; i++) {
  //     a[i] = 5 * (i + 1);
  // }

  // printf("Multiplication table of 5:\n");
  // for(i = 0; i < 10; i++) {
  //     printf("%d ", a[i]);
  // }

  // printf("\n");

  /*
  Repeat the above problem for a general input provided by the user using scanf.
  */
  // int n;
  // printf("Enter n: ");
  // scanf("%d",&n);
  // int a[n], i;
  // for(i = 0; i < 10; i++) {
  //     a[i] = n * (i + 1);
  // }

  // printf("Multiplication table of %d:\n",n);
  // for(i = 0; i < 10; i++) {
  //     printf("%d\n", a[i]);
  // }

  // printf("\n");

  /*
  Write a program containing a function which counts
  the number of positive integers in an array.
  */
  // #include <stdio.h>

  // int count(int a[], int n){
  //     int pos = 0;
  //     for (int i = 0; i < n; i++){
  //         if(a[i] > 0){
  //             pos++;
  //         }
  //     }
  //     return pos;
  // }

  // int main(){
  //     int a[10] = {1,2,-3,4,5,-6,7,8,-9,10};
  //     printf("The number of positive integers are %d\n", count(a, 10));
  //     return 0;
  // }

  /*
  Create an array of size 3 x 10 containing multiplication tables
  of the numbers 2, 7 and 9 respectively.
  */
  // int arr[3][10];
  // int mul[] = {2,7,9};
  // for(int i=0; i<3; i++){
  //     for(int j=0; j<10; j++){
  //         arr[i][j] = mul[i] * (j+1);
  //     }
  // }

  // for(int i = 0; i < 3; i++) {
  //     printf("Multiplication table of %d:\n", mul[i]);
  //     for(int j = 0; j < 10; j++) {
  //         printf("%d ", arr[i][j]);
  //     }
  //     printf("\n\n");
  // }

  /*
  Create a three–dimensional array and print
  the address of its elements in increasing order.
  */
  // int arr[2][3][4];
  // for(int i = 0; i < 2; i++) {
  //     for(int j = 0; j < 3; j++) {
  //         for(int k = 0; k < 4; k++) {
  //             printf("%p\n", &arr[i][j][k]);
  //         }
  //     }
  // }

  /*
  Write a program to input marks of 5 students in an array
  and print them using a loop.
  */
  // int marks[5];

  // printf("Enter marks of 5 students:\n");
  // for(int i = 0; i < 5; i++) {
  //     scanf("%d", &marks[i]);
  // }

  // printf("Marks of the students are:\n");
  // for(int i = 0; i < 5; i++) {
  //     printf("%d ", marks[i]);
  // }
  // printf("\n");

  /*
  Write a program to find the maximum and minimum elements in an array of integers.
  */
  // int n;
  // printf("Enter the number of elements in the array: ");
  // scanf("%d", &n);
  // int arr[n];
  // printf("Enter %d integers:\n", n);
  // for(int i = 0; i < n; i++) {
  //     scanf("%d", &arr[i]);
  // }
  // int max = arr[0];
  // int min = arr[0];
  // for(int i = 1; i < n; i++) {
  //     if(arr[i] > max) {
  //         max = arr[i];
  //     }
  //     if(arr[i] < min) {
  //         min = arr[i];
  //     }
  // }
  // printf("Maximum element: %d\n", max);
  // printf("Minimum element: %d\n", min);

  /*
  Write a program to calculate the sum and average of elements in an array.
  */
  // int n;
  // printf("Enter the number of elements in the array: ");
  // scanf("%d", &n);

  // int arr[n];
  // printf("Enter %d integers:\n", n);
  // for(int i = 0; i < n; i++) {
  //     scanf("%d", &arr[i]);
  // }

  // int sum = 0;
  // for(int i = 0; i < n; i++) {
  //     sum += arr[i];
  // }

  // double average = (double)sum / n;

  // printf("Sum of elements: %d\n", sum);
  // printf("Average of elements: %.2f\n", average);

  return 0;
}
