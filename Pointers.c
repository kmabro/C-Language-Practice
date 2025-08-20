// #include <stdio.h>

// int main(){

/*
Declare an integer variable and a pointer to it.
Print the value of the variable using:
(a) the variable directly
(b) the pointer dereference (*ptr).
*/
// int a = 10;
// int *ptr = &a;
// printf("a = %d\n", a);
// printf("*ptr = %d\n", *ptr);

/*
Write a program to print the memory address of a variable
using both & (address-of) operator and a pointer.
*/
// int var = 10;
// int *ptr = &var;
// printf("Memory address of var using & operator: %p\n", &var);
// printf("Memory address of var using pointer: %p\n", ptr);

/*
Declare two integer variables.
Use a pointer to update the value of one variable from inside main.
*/
// int a = 10;
// int b = 20;
// int *ptr = &a;
// *ptr = 30;
// printf("a = %d\n", a);
// printf("b = %d\n", b);

/*
Write a program that declares a float variable.
Create a pointer to it, change the value using the pointer,
then print the updated value.
*/
// float var = 10.5;
// float *ptr = &var;
// *ptr = 20.5;
// printf("Updated value of var: %.2f\n", var);

/*
Create a pointer to a pointer (int **pptr).
Demonstrate accessing the value of a variable using:
variable, *ptr, and **pptr.
*/
// int variable = 10;
// int *ptr = &variable;
// int **pptr = &ptr;
// printf("**pptr = %d\n", **pptr);

//   return 0;
// }

/*
Write two functions that increment a number by 1:
(a) One using call by value
(b) Another using call by reference (pointer).
Show the difference in main.
*/
// #include <stdio.h>

// void inc1(int a);
// void inc2(int *a);

// int main() {
//     int a = 10;

//     printf("Original value: %d\n", a);

//     inc1(a);
//     printf("After inc1: %d\n", a);

//     inc2(&a);
//     printf("After inc2: %d\n", a);

//     return 0;
// }

// void inc1(int a) {
//     a++;
//     printf("Inside inc1: %d\n", a);
// }

// void inc2(int *a) {
//     (*a)++;
//     printf("Inside inc2: %d\n", *a);
// }

/*
Implement a function that swaps two integers:
(a) using call by value (does not actually swap in main)
(b) using call by reference (actually swaps in main).
*/
// #include <stdio.h>
// void swap1(int a, int b);
// void swap2(int *a, int *b);

// int main(){
//   int a = 10;
//   int b = 20;

//   printf("Before swap1: a = %d, b = %d\n", a, b);
//   swap1(a, b);
//   printf("After swap1: a = %d, b = %d\n", a, b);

//   printf("Before swap2: a = %d, b = %d\n", a, b);
//   swap2(&a, &b);
//   printf("After swap2: a = %d, b = %d\n", a, b);

//   return 0;
// }

// void swap1(int a, int b){
//   int temp = a;
//   a = b;
//   b = temp;
//   printf("Inside swap1: a = %d, b = %d\n", a, b);
// }

// void swap2(int *a, int *b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;
//   printf("Inside swap2: a = %d, b = %d\n", *a, *b);
// }

/*
Write a program to print the address of a variable.
Use this address to get the value of the variable.
*/
// #include<stdio.h>
// int main(){
// int a = 10;
// int* ptr = &a;
// printf("Address of variable: %p\n",&a);
// printf("Address of variable using ptr: %p\n",ptr);
// printf("Value using address: %d\n", *ptr);
//     return 0;
// }

/*
Write a program having a variable ‘i’. Print the address of ‘i’.
Pass this variable to a function and print its address.
Are these addresses same? Why?
*/
// #include<stdio.h>

// void displayAddress(int i) {
//     printf("Address of i inside function: %p\n", &i);
// }

// int main(){
// int i = 10;
// int* ptr = &i;

// printf("Address of variable: %p\n",&i);

// displayAddress(i);

// return 0;
// }

/*
Write a program to change the value of a variable
to ten times of its current value using pointers.
*/
// #include<stdio.h>
// void change(int* ptr){
//     *ptr = *ptr * 10;
// }
// int main(){

//     int x = 10;
//     printf("The value of x is: %d\n",x);
//     change(&x);
//     printf("The value of x is: %d",x);

//     return 0;
// }

/*
Write a function and pass the value by reference.
Inside the function, modify the value of the variable
and check whether the changes reflect in the calling function.
*/
// #include<stdio.h>

// int func(int* ptr){
//     *ptr += 10;
//     printf("Inside function: Value = %d\n", *ptr);
// }
// int main(){
//     int value = 20;

//     printf("Before function call: Value = %d\n", value);

//     func(&value);

//     printf("After function call: Value = %d\n", value);

//     return 0;
// }

/*
Write a program using a function which calculates
the sum and average of two numbers.
Use pointers and print the values of sum and average in main().
*/
// #include<stdio.h>

// void calculate(int a, int b, int *sum, float *avg) {
//     *sum = a + b;
//     *avg = (float)(*sum) / 2;
// }

// int main(){

//     int num1, num2, sum;
//     float average;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     calculate(num1, num2, &sum, &average);

//     printf("Sum = %d\n", sum);
//     printf("Average = %.2f\n", average);

//     return 0;
// }

/*
Write a program to print the value of a variable i
by using “pointer to pointer” type of variable.
*/
// #include<stdio.h>
// int main(){

//     int a = 10;
//     int* ptr = &a;
//     int** pptr = &ptr;

//     printf("%d",**pptr);

//     return 0;
// }

/*
Write a program to declare a float variable,
store its address in a pointer,
and print both the address and the value using the pointer.
*/
// #include<stdio.h>
// int main(){

//     float a = 10;
//     float* ptr = &a;
//     printf("%p\n",&a);
//     printf("%p\n",ptr);
//     printf("%f\n", a);
//     printf("%f\n", *ptr);

//     return 0;
// }

/*
Write a program to swap two numbers using a function and pointers.
*/
// #include<stdio.h>

// void swap(int*a, int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){

//     int a = 1,b=2;
//     printf("Values before swap: %d  %d\n",a,b);
//     swap(&a,&b);
//     printf("Values after swap: %d  %d\n",a,b);

//     return 0;
// }
