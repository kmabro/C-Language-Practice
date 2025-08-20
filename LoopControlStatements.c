#include <stdio.h>

int main()
{

  /*
  Write a program to print the multiplication table of any number entered by the user.
  Use a `for` loop and format the output like:
  5 x 1 = 5
  5 x 2 = 10
  ...
  */
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // for (int i = 1; i <= 10; i++){
  //   printf("%d x %d = %d\n", a, i, a*i);
  // }

  /*
  Write a program that asks the user for a number N and prints the sum of the first N natural numbers.
  Use a `while` loop.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int sum = 0;
  // int i = 1;
  // while (i <= num){
  //   sum += i;
  //   i++;
  // }
  // printf("The sum of the first %d natural numbers is %d\n", num, sum);

  /*
  Write a program to reverse the digits of an integer entered by the user.
  Example:
  Input: 12345
  Output: 54321
  Use a `while` loop.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int rev = 0;
  // while (num != 0){
  //   rev = rev * 10 + num % 10;
  //   num /= 10;
  // }
  // printf("The reversed number is %d\n", rev);

  /*
  Write a program that prints all numbers between 1 and 100 which are divisible by both 3 and 5.
  Use a `for` loop and the `continue` statement.
  */
  // for (int i = 1; i <= 100; i++){
  //   if (i%3 !=0 || i%5 != 0){
  //     continue;
  //   }
  //   printf("%d\n", i);
  // }

  /*
  Write a program to keep asking the user to enter a positive number.
  Stop asking when the user enters a negative number, then print the total sum of all positive numbers entered.
  Use a `do-while` loop.
  */
  // int num;
  // int sum = 0;
  // do{
  //   printf("Enter a positive number: ");
  //   scanf("%d", &num);
  //   if(num>=0){
  //     sum += num;
  //     }
  // }while (num >= 0);
  // printf("The sum of all positive numbers entered is %d\n", sum);

  /*
  Write a program to print a right-angled triangle pattern of stars (*) of height N.
  Example:
  Input: 4
  Output:
  *
  **
  ***
  ****
  Use nested `for` loops.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= num; i++){
  //   for (int j = 1; j <= i; j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  /*
  Write a program that counts the number of digits in an integer entered by the user.
  Example:
  Input: 9876
  Output: 4
  Use a `while` loop.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int count = 0;
  // while (num != 0){
  //   num /= 10;
  //   count++;
  // }
  // printf("The number of digits is %d\n", count);

  /*
  Write a program to print the factorial of a number entered by the user.
  Example:
  Input: 5
  Output: 120
  Use a `for` loop.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int fact = 1;
  // for (int i = 1; i <= num; i++){
  //   fact *= i;
  // }
  // printf("The factorial of %d is %d\n", num, fact);

  /*
  Write a program to print multiplication table of a given number n.
  */
  // int n;
  // printf("Enter number: ");
  // scanf("%d",&n);
  // for(int i=1; i<= 10; i++){
  //     printf("%d X %d = %d\n",i,n,i*n);
  // }

  /*
  Write a program to print multiplication table of 10 in reversed order.
  */
  // int n;
  // printf("Enter number: ");
  // scanf("%d",&n);
  // for(int i=10; i>= 1; i--){
  //     printf("%d X %d = %d\n",i,n,i*n);
  // }

  /*
  Write a program to sum first ten natural numbers using while loop.
  */
  // int i=1, sum=0;
  // while(i<=10){
  //     sum+=i;
  //     i++;
  // }
  // printf("Sum of first 10 natural numbers = %d\n", sum);

  /*
  Write a program to sum first ten natural numbers ‘for’ and ‘do-while’ loop.
  */
  // int sum=0;
  // for(int i=1;i<=10;i++){
  //     sum +=i;
  // }
  // printf("Sum of first 10 natural numbers = %d\n", sum);

  // int i=1, sum=0;
  // do{
  //     sum += i;
  //     i++;
  // }while(i<=10);
  // printf("Sum of first 10 natural numbers = %d\n", sum);

  /*
  Write a program to calculate the sum of the numbers occurring in the
  multiplication table of n. (consider 8 x 1 to 8 x 10).
  */
  // int n,sum=0;
  // printf("Enter number: ");
  // scanf("%d",&n);
  // for(int i=1; i<= 10; i++){
  //     printf("%d X %d = %d\n",i,n,i*n);
  //     sum += i*n;
  // }
  // printf("%d\n", sum);

  /*
  Write a program to calculate the factorial of a given number using a for loop.
  */
  // int fact=1,i,n;
  // printf("Enter a number: ");
  // scanf("%d",&n);
  // for(i=1; i<=n; i++){
  //     fact *= i;
  // }
  // printf("Factorial of %d is %d\n", n, fact);

  /*
  Repeat the factorial program using while loop.
  */
  // int fact=1,i=1,n;
  // printf("Enter a number: ");
  // scanf("%d",&n);
  // while(i<=n){
  //     fact *= i;
  //     i++;
  // }
  // printf("Factorial of %d is %d\n", n, fact);

  /*
  Write a program to check whether a given number is prime or not using loops.
  */
  // int n;
  // printf("Enter a number: ");
  // scanf("%d",&n);

  // int not_prime =0;
  // for(int i=2; i<n; i++){
  //     if(n%i==0 && n!=2){
  //         not_prime =1;
  //         break;
  //     }
  // }
  // if(not_prime){
  //     printf("%d is not prime\n", n);
  // }

  // else{
  //     printf("%d is prime\n", n);
  // }

  /*
  Write a program to print all even numbers from 1 to n using a while loop.
  */
  // int n, i = 1;
  // printf("Enter a number: ");
  // scanf("%d", &n);

  // printf("The even numbers between 1 and %d are:\n", n);
  // while (i <= n) {
  //     if (i % 2 == 0) {
  //         printf("%d\n", i);
  //     }
  //     i++;
  // }

  /*
  Write a program to print the reverse of a given number using a loop.
  Example: Input: 1234 → Output: 4321
  */
  // int n,rem,rev=0;
  // printf("Enter a number: ");
  // scanf("%d", &n);
  // while(n !=0){
  //     rem = n%10;
  //     rev = rev*10+rem;
  //     n = n/10;
  // }
  //  printf("Reversed number = %d\n", rev);

  /*
  Write a program to find the sum of digits of a given number using a while loop.
  Example: Input: 567 → Output: 18
  */
  // int n,rem,sum=0;
  // printf("Enter a number: ");
  // scanf("%d", &n);
  // while(n!=0){
  //     rem = n%10;
  //     sum = sum+rem;
  //     n = n/10;
  // }
  // printf("Sum of digits = %d\n", sum);

  /*
  Write a program to implement a basic calculator using a while loop until the user chooses to exit.
  */
  // int choice;
  // double num1, num2, result;

  // while (1) {
  //     printf("\n--- Calculator Menu ---\n");
  //     printf("1. Addition\n");
  //     printf("2. Subtraction\n");
  //     printf("3. Multiplication\n");
  //     printf("4. Division\n");
  //     printf("5. Exit\n");
  //     printf("Enter your choice: ");
  //     scanf("%d", &choice);

  //     if (choice == 5) {
  //         printf("Exiting calculator... Goodbye!\n");
  //         break;
  //     }

  //     printf("Enter two numbers: ");
  //     scanf("%lf %lf", &num1, &num2);

  //     switch (choice) {
  //         case 1:
  //             result = num1 + num2;
  //             printf("Result = %.2lf\n", result);
  //             break;
  //         case 2:
  //             result = num1 - num2;
  //             printf("Result = %.2lf\n", result);
  //             break;
  //         case 3:
  //             result = num1 * num2;
  //             printf("Result = %.2lf\n", result);
  //             break;
  //         case 4:
  //             if (num2 != 0) {
  //                 result = num1 / num2;
  //                 printf("Result = %.2lf\n", result);
  //             } else {
  //                 printf("Error: Division by zero not allowed.\n");
  //             }
  //             break;
  //         default:
  //             printf("Invalid choice! Please try again.\n");
  //     }
  // }

  /*
  Write a program to print the Fibonacci series up to n terms using a for loop.
  Example: 0 1 1 2 3 5 8 ...
  */
  // int n, a = 0, b = 1, c;
  // printf("Enter number of terms: ");
  // scanf("%d", &n);
  // printf("Fibonacci Series: ");
  // for (int i = 1; i <= n; i++) {
  //     printf("%d ", a);
  //     c = a + b;
  //     a = b;
  //     b = c;
  // }

  /*
  Write a C program that generates a random number between 1 and 100,
  and lets the user guess the number. After each guess, the program should
  tell the user whether the guess is too high or too low, and count how many
  guesses it takes until the correct number is guessed.
  */
  // srand(time(0));

  // int randomNumber = (rand() % 100) + 1;
  // int no_of_guesses = 0;
  // int guessed_number;

  // do
  // {
  //     printf("Guess the number: ");
  //     scanf("%d", &guessed_number);
  //     if(guessed_number>randomNumber){
  //         printf("Lower number please!\n");
  //     }
  //     else if(guessed_number<randomNumber){
  //         printf("Higher number please!\n");
  //     }
  //     else{
  //         printf("Congrats!!\n");
  //     }
  //     no_of_guesses++;

  // } while (guessed_number != randomNumber);

  // printf("You guessed the number in %d guesses", no_of_guesses);

  return 0;
}
