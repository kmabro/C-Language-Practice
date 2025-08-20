#include <stdio.h>

int main()
{

  /*
  Write a C program that takes an integer as input
  and prints whether it is positive, negative, or zero
  using if-else.
  */
  // int num;
  // printf("Enter an integer: ");
  // scanf("%d", &num);
  // if (num > 0){
  //   printf("The number is positive.\n");
  // }
  // else if (num < 0){
  //   printf("The number is negative.\n");
  // }
  // else {
  //   printf("The number is zero.\n");
  // }

  /*
  Write a C program that takes a number from the user
  and checks if it is even or odd using if-else.
  */
  // int num;
  // printf("Enter an integer: ");
  // scanf("%d", &num);
  // if (num % 2 == 0){
  //   printf("The number is even.\n");
  // }
  // else{
  //   printf("The number is odd.\n");
  // }
  // return 0;
  // }

  /*
  Write a C program that asks for your age and:
  - If age < 13 → print "Child"
  - If age is between 13 and 18 → print "Teenager"
  - Otherwise → print "Adult"
  Use else if ladder.
  */
  // int age;
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // if (age < 13){
  //   printf("Child\n");
  // }
  // else if (age >= 13 && age <= 18){
  //   printf("Teenager\n");
  // }
  // else {
  //   printf("Adult\n");
  // }

  /*
  Write a C program that asks the user to enter two numbers
  and prints the greater number using the ternary operator.
  */
  // int num1, num2;
  // printf("Enter two numbers: ");
  // scanf("%d %d", &num1, &num2);
  // int max = (num1 > num2) ? num1 : num2;
  // printf("The greater number is: %d\n", max);

  /*
  Write a C program that asks the user for a number
  and prints "Even" if the number is even,
  otherwise prints "Odd" using the ternary operator.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

  /*
  Write a C program that takes an integer between 1 and 7
  and prints the corresponding day of the week
  using switch-case.
  */
  // int day;
  // printf("Enter a number between 1 and 7: ");
  // scanf("%d", &day);
  // switch (day){
  //   case 1:
  //     printf("Monday\n");
  //     break;
  //   case 2:
  //     printf("Tuesday\n");
  //     break;
  //   case 3:
  //     printf("Wednesday\n");
  //     break;
  //   case 4:
  //     printf("Thursday\n");
  //     break;
  //   case 5:
  //     printf("Friday\n");
  //     break;
  //   case 6:
  //     printf("Saturday\n");
  //     break;
  //   case 7:
  //     printf("Sunday\n");
  //     break;
  //   default:
  //     printf("Invalid input\n");
  // }

  /*
  Write a C program that takes a character ('m','t','w','T','f','s','S')
  and prints the corresponding day name using switch-case.
  */
  // char day;
  // printf("Enter a character (m,t,w,T,f,s,S): ");
  // scanf(" %c", &day);
  // switch (day){
  //   case 'm':
  //     printf("Monday\n");
  //     break;
  //   case 't':
  //     printf("Tuesday\n");
  //     break;
  //   case 'w':
  //     printf("Wednesday\n");
  //     break;
  //   case 'T':
  //     printf("Thursday\n");
  //     break;
  //   case 'f':
  //     printf("Friday\n");
  //     break;
  //   case 's':
  //     printf("Saturday\n");
  //     break;
  //   case 'S':
  //     printf("Sunday\n");
  //     break;
  //   default:
  //     printf("Invalid input\n");
  // }

  /*
  Write a C program that takes a month number (1-12)
  and prints the number of days in that month using switch-case.
  (For simplicity, ignore leap years.)
  */
  // int month;
  // printf("Enter a month number (1-12): ");
  // scanf("%d", &month);
  // switch (month){
  //   case 1:
  //     printf("31 days\n");
  //     break;
  //   case 2:
  //     printf("28 days\n");
  //     break;
  //   case 3:
  //     printf("31 days\n");
  //     break;
  //   case 4:
  //     printf("30 days\n");
  //     break;
  //   case 5:
  //     printf("31 days\n");
  //     break;
  //   case 6:
  //     printf("30 days\n");
  //     break;
  //   case 7:
  //     printf("31 days\n");
  //     break;
  //   case 8:
  //     printf("31 days\n");
  //     break;
  //   case 9:
  //     printf("30 days\n");
  //     break;
  //   case 10:
  //     printf("31 days\n");
  //     break;
  //   case 11:
  //     printf("30 days\n");
  //     break;
  //   case 12:
  //     printf("31 days\n");
  //     break;
  //   default:
  //     printf("Invalid input\n");
  // }

  /*
  Write a C program that takes a grade character ('A','B','C','D','F')
  and prints the meaning:
  A → Excellent
  B → Good
  C → Average
  D → Poor
  F → Fail
  Use switch-case.
  */
  // char grade;
  // printf("Enter a grade (A,B,C,D,F): ");
  // scanf(" %c", &grade);
  // switch (grade){
  //   case 'A':
  //     printf("Excellent\n");
  //     break;
  //   case 'B':
  //     printf("Good\n");
  //     break;
  //   case 'C':
  //     printf("Average\n");
  //     break;
  //   case 'D':
  //     printf("Poor\n");
  //     break;
  //   case 'F':
  //     printf("Fail\n");
  //     break;
  //   default:
  //     printf("Invalid input\n");
  // }

  /*
  Write a C program that takes a number (1-3) for shape choice:
  1 → Circle
  2 → Square
  3 → Triangle
  Then ask for the required dimensions and calculate area.
  Use switch-case for shape selection.
  */
  // int choice;
  // printf("Enter a number (1-3) for shape choice:\n");
  // printf("1 -> Circle\n");
  // printf("2 -> Square\n");
  // printf("3 -> Triangle\n");
  // scanf("%d", &choice);

  // switch (choice) {
  //     case 1: {
  //         float radius;
  //         printf("Enter the radius: ");
  //         scanf("%f", &radius);
  //         printf("Area of circle: %.2f\n", 3.14f * radius * radius);
  //         break;
  //     }
  //     case 2: {
  //         float side;
  //         printf("Enter the side: ");
  //         scanf("%f", &side);
  //         printf("Area of square: %.2f\n", side * side);
  //         break;
  //     }
  //     case 3: {
  //         float base, height;
  //         printf("Enter the base: ");
  //         scanf("%f", &base);
  //         printf("Enter the height: ");
  //         scanf("%f", &height);
  //         printf("Area of triangle: %.2f\n", 0.5f * base * height);
  //         break;
  //     }
  //     default:
  //         printf("Invalid input\n");
  // }

  /*
  Write a program to determine whether a student has passed or failed.
  To pass, a student requires a total of 40% and at least 33% in each subject.
  Assume there are three subjects and take the marks as input from the user.
  */
  // int m1,m2,m3;
  // printf("Enter marks in subject 1: \n");
  // scanf("%d",&m1);
  // printf("Enter marks in subject 2: \n");
  // scanf("%d",&m2);
  // printf("Enter marks in subject 3: \n");
  // scanf("%d",&m3);

  // if(m1<33 || m2<33 || m3<33){
  //     printf("Fail");
  // }
  // else if((m1+m2+m3)/3 <40){
  //     printf("Fail");
  // }
  // else{
  //     printf("Pass");
  // }

  /*
  Calculate income tax paid by an employee to the government as per the slabs mentioned below:

  Income Slab       Tax
  2.5 – 5.0L        5%
  5.0L - 10.0L      20%
  Above 10.0L       30%

  Note: There is no tax below 2.5L.
  Take income amount as an input from the user.
  */
  // int income,tax;
  // printf("Enter income: ");
  // scanf("%d", &income);
  // if(income < 250000){
  //     tax = 0;
  // }
  // else if(income > 250000 && income <= 500000){
  //     tax = (income - 250000)* 0.05;
  // }
  // else if(income > 500000 && income <= 1000000){
  //     tax = (500000 -2500000) * 0.05 + (income - 500000) * 0.2;
  // }
  // else{
  //     tax = (500000 -2500000) * 0.05 + (1000000 - 500000) * 0.2 + (income - 1000000) * 0.3;
  // }
  // printf("Total tax is: %d",tax);

  /*
  Write a program to find whether a year entered by the user is a leap year or not.
  Take year as an input from the user.
  */
  // int year;
  // printf("Enter a year: ");
  // scanf("%d", &year);
  // if(year %4 ==0 && year %100 !=0 || year%400 ==0){
  //     printf("Leap year");
  // }
  // else{
  //     printf("Not leap year");
  // }

  /*
  Write a program to determine whether a character entered by the user is lowercase or not.
  */
  // char ch;
  // printf("Enter a character: ");
  // scanf("%c",&ch);
  // if(ch >= 'a' && ch <= 'z'){
  //     printf("lowercase");
  // }
  // else{
  //     printf("not lowercase");
  // }

  /*
  Write a program to find greatest of four numbers entered by the user.
  */
  // int a,b,c,d;
  // printf("Enter four numbers: ");
  // scanf("%d %d %d %d", &a,&b,&c,&d);

  //  if(a > b && a > c && a > d) {
  //      printf("Greatest = %d\n", a);
  //  }
  //  else if(b > a && b > c && b > d) {
  //      printf("Greatest = %d\n", b);
  //  }
  //  else if(c > a && c > b && c > d) {
  //      printf("Greatest = %d\n", c);
  //  }
  //  else {
  //      printf("Greatest = %d\n", d);
  //  }

  /*
  Write a program that takes marks of a student and prints the grade:
  90 – 100 => A
  80 – 90  => B
  70 – 80  => C
  60 – 70  => D
  50 – 60  => E
  Below 50 => F
  */
  // int marks;
  // printf("Enter marks: ");
  // scanf("%d", &marks);
  // if(marks >= 90 && marks <= 100) {
  //     printf("Grade: A\n");
  // }
  // else if(marks >= 80 && marks < 90) {
  //     printf("Grade: B\n");
  // }
  // else if(marks >= 70 && marks < 80) {
  //     printf("Grade: C\n");
  // }
  // else if(marks >= 60 && marks < 70) {
  //     printf("Grade: D\n");
  // }
  // else if(marks >= 50 && marks < 60) {
  //     printf("Grade: E\n");
  // }
  // else if(marks >= 0 && marks < 50) {
  //     printf("Grade: F\n");
  // }
  // else {
  //     printf("Invalid marks entered!\n");
  // }

  /*
  Write a program to build a simple calculator using switch-case that supports:
  1. Addition
  2. Subtraction
  3. Multiplication
  4. Division
  The user will choose an option and enter two numbers.
  */
  // int choice;
  // double num1, num2, result;

  // printf("Simple Calculator\n");
  // printf("1. Addition\n");
  // printf("2. Subtraction\n");
  // printf("3. Multiplication\n");
  // printf("4. Division\n");
  // printf("Enter your choice (1-4): ");
  // scanf("%d", &choice);

  // printf("Enter two numbers: ");
  // scanf("%lf %lf", &num1, &num2);

  // switch(choice) {
  //     case 1:
  //         result = num1 + num2;
  //         printf("Result = %.2lf\n", result);
  //         break;
  //     case 2:
  //         result = num1 - num2;
  //         printf("Result = %.2lf\n", result);
  //         break;
  //     case 3:
  //         result = num1 * num2;
  //         printf("Result = %.2lf\n", result);
  //         break;
  //     case 4:
  //         if(num2 != 0) {
  //             result = num1 / num2;
  //             printf("Result = %.2lf\n", result);
  //         } else {
  //             printf("Error: Division by zero is not allowed.\n");
  //         }
  //         break;
  //     default:
  //         printf("Invalid choice!\n");
  // }

  /*
  Write a program that checks whether a given character is a vowel or consonant
  using switch-case.
  */
  // char ch;
  // printf("Enter a character: ");
  // scanf(" %c", &ch);
  // switch(ch) {
  //     case 'a': case 'e': case 'i': case 'o': case 'u':
  //     case 'A': case 'E': case 'I': case 'O': case 'U':
  //         printf("Vowel\n");
  //         break;
  //     default:
  //         printf("Consonant\n");
  // }

  return 0;
}
