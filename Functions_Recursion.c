#include <stdio.h>

/*
Write a function `greetUser` that takes the user's name (as a string)
and prints: "Hello <name>, welcome to C programming!"
Call this function from `main` after taking the name as input.
*/
// void greetUser(char name[]){
//   printf("Hello %s, welcome to C programming!\n", name);
// }

// int main(){
//   char name[100];
//   printf("Enter your name: ");
//   scanf("%s", name);
//   greetUser(name);
//   return 0;
// }

/*
Write a function `isEven` that takes an integer and
returns 1 if it's even, 0 otherwise.
Call this function in `main` to check if a user-entered number is even or odd.
*/
// int isEven(int num){
//   if(num % 2 == 0){
//     return 1;
//   }
//   else{
//     return 0;
//   }
// }

// int main(){
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("%d\n", isEven(num));
//   return 0;
// }

/*
Write a function `sumOfTwo` that takes two integers as arguments
and returns their sum.
Take both numbers from the user and print the sum in `main`.
*/
// int sumOfTwo(int num1, int num2);

// int main(){
//   int num1, num2;
//   printf("Enter two numbers: ");
//   scanf("%d %d", &num1, &num2);
//   printf("Sum: %d\n", sumOfTwo(num1, num2));
//   return 0;
// }

// int sumOfTwo(int num1, int num2){
//   return num1 + num2;
// }

/*
Write a function `getMax` that takes three integers as parameters
and returns the largest.
Take input from the user in `main` and display the largest number.
*/
// int getMax(int num1, int num2, int num3);

// int main(){
//   int num1, num2, num3;
//   printf("Enter three numbers: ");
//   scanf("%d %d %d", &num1, &num2, &num3);
//   printf("Largest number: %d\n", getMax(num1, num2, num3));
//   return 0;
// }

// int getMax(int num1, int num2, int num3){
//   if(num1 > num2 && num1 > num3){
//     return num1;
//   }
//   else if(num2 > num1 && num2 > num3){
//     return num2;
//   }
//   else{
//     return num3;
//   }
// }

/*
Write a function `calcPower` that takes two integers `base` and `exp`
and returns base^exp (without using pow()).
Use a loop (not recursion).
*/
// int calcPower(int base, int exp);

// int main(){
//   int base, exp;
//   printf("Enter base and exponent: ");
//   scanf("%d %d", &base, &exp);
//   printf("%d^%d = %d\n", base, exp, calcPower(base, exp));
//   return 0;
// }

// int calcPower(int base, int exp){
//   int result = 1;
//   for(int i = 0; i < exp; i++){
//     result *= base;
//   }
//   return result;
// }

/*
Write a recursive function `countdown` that prints numbers from n down to 1.
Take n from the user and call the function.
*/
// void countdown(int n);

// int main(){
//   int n;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   countdown(n);
//   return 0;
// }

// void countdown(int n){
//   if(n == 0){
//     return;
//   }
//   else{
//     printf("%d\n", n);
//     countdown(n - 1);
//   }
// }

/*
Write a recursive function `sumNatural` that returns
the sum of first n natural numbers.
Example: n=5 → 1+2+3+4+5 = 15
*/
// int sumNatural(int n);

// int main() {
//   int n;
//   printf("Enter a number: ");
//   scanf("%d", &n);

//   if (n < 0) {
//     printf("Error: Input must be non-negative.\n");
//     return 1;
//   }

//   printf("Sum of first %d natural numbers: %d\n", n, sumNatural(n));
//   return 0;
// }

// int sumNatural(int n) {
//   if (n <= 0) {
//       return 0;
//   }
//   else {
//       return n + sumNatural(n - 1);
//   }
// }

/*
Write a program using a function to find the average of three numbers.
*/
// #include<stdio.h>

// int avg(int a,int b, int c);

// int main(){

//     int ans = avg(1,2,3);
//     printf("%d",ans);

//     return 0;
// }

// int avg(int a,int b, int c){
//     return (a+b+c)/3;
// }

/*
Write a function to convert Celsius temperature into Fahrenheit.
*/
// #include <stdio.h>

// float ctof(float cel);

// int main() {
//     float cel;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &cel);

//     float f = ctof(cel);
//     printf("Temperature in Fahrenheit: %.2f\n", f);

//     return 0;
// }

// float ctof(float cel) {
//     return ((9.0/5.0) * cel) + 32;
// }

/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth.
Take g = 9.8 m/s².
*/
// #include<stdio.h>

// float foa(float m);

// int main(){
//     float mass;
//     printf("Enter mass of the body (in kg): ");
//     scanf("%f", &mass);

//     float f = foa(mass);
//     printf("Force of attraction: %.2f N\n", f);

//     return 0;
// }

// float foa(float  m){
//     float g = 9.8;
//     return m*g;
// }

/*
Write a program using recursion to calculate the nth element of the Fibonacci series.
*/
// #include<stdio.h>

// int fib(int n);

// int main(){

//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     printf("The %dth Fibonacci number is: %d\n", n, fib(n));

//     return 0;
// }

// int fib(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }

/*
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/

// #include<stdio.h>

// int sum(int n);

// int main(){

//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);

//     int totalsum = sum(n);
//     printf("Sum is: %d",totalsum);

//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return sum(n-1)+n;
//     }
// }

/*
Write a program using a function to print the following pattern (first n lines):
*
* * *
* * * * *
*/
// #include<stdio.h>
// int main(){
//     int n=3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*i+1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
Write a function in C to calculate the square of a number.
Call the function from main() and print the result.
*/
// #include<stdio.h>

// int sqr(int n);

// int main(){

//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);

//     int sq = sqr(n);
//     printf("Square of number %d is: %d",n,sq);

//     return 0;
// }

// int sqr(int n){
//     return n*n;
// }

/*
Write a function in C that takes two numbers as input
and returns the maximum of the two.
*/
// #include<stdio.h>

// int max(int a,int b);

// int main(){

//     int a,b;
//     printf("Please, Enter two numbers: ");
//     scanf("%d %d",&a,&b);

//     int maxi = max(a,b);
//     printf("maximum number is: %d",maxi);
//     return 0;
// }

// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

/*
Write a recursive function to print numbers from 1 to n.
Example: for n = 5 → output: 1 2 3 4 5
*/
// #include<stdio.h>

// void rec(int n);

// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     rec(n);

//     return 0;
// }

// void rec(int n){
//     if(n==0){
//         return;
//     }
//     else{
//         rec(n-1);
//         printf("%d ",n);
//     }
// }

/*
Write a function in C that takes a character as input and
returns 1 if it is a vowel, 0 otherwise.
*/
// #include<stdio.h>

// int isVowel(char c);

// int main(){

//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     if (isVowel(ch))
//         printf("%c is a vowel.\n", ch);
//     else
//         printf("%c is not a vowel.\n", ch);

//     return 0;
// }

// int isVowel(char c){
//     if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
//         c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
//         return 1;
//     else
//         return 0;
// }
