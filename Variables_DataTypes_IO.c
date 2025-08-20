#include <stdio.h>

int main()
{

  // int age = 19;
  // float pi = 3.14;
  // char star = '&';

  // printf("Age is %d\n", age);
  // printf("Value of Pi is %f\n", pi);
  // printf("And is %c\n", star);

  // int a,b;

  // printf("Enter a: ");
  // scanf("%d", &a);

  // printf("Enter b: ");
  // scanf("%d", &b);

  // int sum = a + b;
  // printf("Sum of a and b is: %d\n", sum);

  // Area of square
  // int side;
  // printf("Enter side of square: ");
  // scanf("%d", &side);
  // int area = side * side;
  // printf("Area of square is: %d\n", area);

  // Area of circle
  // float radius;
  // float pi = 3.14;
  // printf("Enter radius of circle: ");
  // scanf("%f", &radius);
  // float area = pi * radius * radius;
  // printf("Area of circle is: %f\n", area);

  // Perimeter of rectangle
  // int a,b;
  // printf("Enter a: ");
  // scanf("%d", &a);
  // printf("Enter b: ");
  // scanf("%d", &b);
  // int perimeter = 2 * (a + b);
  // printf("Perimeter of rectangle is: %d\n", perimeter);

  // Cube of number
  // int num;
  // printf("Enter number: ");
  // scanf("%d", &num);
  // int cube = num * num * num;
  // printf("Cube of number is: %d\n", cube);

  /*
  Write a program to take a user's name as input (single word) and print:
  "Hello <name>, welcome to C programming!".
  */
  // char name[100];
  // printf("Enter your name: ");
  // scanf("%s", name);
  // printf("Hello %s, welcome to C programming!\n", name);

  /*
  Write a program to take two integers as input and print their sum, difference, and product.
  */
  // float a,b;

  // printf("Enter a: ");
  // scanf("%f", &a);

  // printf("Enter b: ");
  // scanf("%f", &b);

  // printf("Sum of a and b is: %f\n", a + b);
  // printf("Difference of a and b is: %f\n", a - b);
  // printf("Product of a and b is: %f\n", a * b);

  /*
  Write a program to take the radius of a circle as input and print its circumference.
  Formula: circumference = 2 * 3.14 * radius
  */
  // float radius;
  // float pi = 3.14;
  // printf("Enter radius of circle: ");
  // scanf("%f", &radius);
  // float circumference = 2 * pi * radius;
  // printf("Circumference of circle is: %f\n", circumference);

  /*
  Write a program that takes a character as input and prints its ASCII value.
  */
  // char ch;
  // printf("Enter a character: ");
  // scanf("%c", &ch);
  // printf("ASCII value of %c is: %d\n", ch, ch);

  /*
  Write a program that takes a float value (temperature in Celsius) and converts it to Fahrenheit.
  Formula: Fahrenheit = (Celsius * 9/5) + 32
  */
  // float celsius;
  // float fahrenheit;
  // printf("Enter temperature in Celsius: ");
  // scanf("%f", &celsius);
  // fahrenheit = (celsius * 9/5) + 32;
  // printf("Temperature in Fahrenheit is: %f\n", fahrenheit);

  /*
  Write a program to read an integer from the user and print whether it is positive, negative, or zero.
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // if (num > 0)
  //   printf("Number is positive\n");
  // else if (num < 0)
  //   printf("Number is negative\n");
  // else
  //   printf("Number is zero\n");

  /*
  Write a program to calculate the average of three numbers entered by the user.
  */
  // float a,b,c;
  // printf("Enter three numbers: ");
  // scanf("%f %f %f", &a, &b, &c);
  // float average = (a + b + c) / 3;
  // printf("Average of three numbers is: %f\n", average);

  /*
  Write a program that takes a student's name (single word) and marks in 3 subjects as input
  and then prints:
  "<name> has scored <total_marks> out of 300."
  */
  // char name[100];
  // float a,b,c;
  // printf("Enter your name: ");
  // scanf("%s", name);
  // printf("Enter marks in 3 subjects: ");
  // scanf("%f %f %f", &a, &b, &c);
  // float total_marks = a + b + c;
  // printf("%s has scored %f out of 300.\n", name, total_marks);

  /*
  Write a C program to calculate area of a rectangle:
  a) Using hard coded inputs.
  b) Using inputs supplied by the user.
  */
  // int len = 5;
  // int bre = 10;
  // printf("Area of rectangle is: %d", len*bre);

  // printf("\nEnter length: ");
  // scanf("%d", &len);
  // printf("Enter breadth: ");
  // scanf("%d", &bre);
  // printf("Area of rectangle is: %d", len*bre);

  /*
  Write a program to calculate the area of a circle
  and then modify it to calculate the volume of a cylinder
  given its radius and height.
  */
  // float pi = 3.14;
  // float radius, height;
  // printf("Enter radius: ");
  // scanf("%f", &radius);
  // printf("Enter height of cylinder: ");
  // scanf("%f", &height);

  // float circle_area = pi * radius * radius;
  // printf("The area of cicle is: %.2f", circle_area);

  // float cylinder_volume = circle_area * height;
  // printf("\nVolume of cylinder: %.2f", cylinder_volume);

  /*
  Write a program to convert Celsius temperature into Fahrenheit.
  Formula: F = (C * 9/5) + 32
  */
  // float c,f;
  // printf("Enter temperature in Celsius: ");
  // scanf("%f",&c);
  // f = (c * 9.0/5.0) + 32;
  // printf("The Celsius %.1f to Fahrenheit is %.1f",c,f );

  /*
  Write a program to calculate simple interest.
  Formula: SI = (P * R * T) / 100
  Where P = Principal, R = Rate, T = Time (years)
  */
  // int P,R,T;
  // printf("Enter Principal: ");
  // scanf("%d", &P);
  // printf("Enter Rate: ");
  // scanf("%d", &R);
  // printf("Enter Time in years: ");
  // scanf("%d", &T);
  // int SI = (P*R*T)/100;
  // printf("The simple interest is: %d", SI);

  /*
  Write a program to calculate the perimeter of a rectangle
  by taking length and width as input.
  */
  // float l,w;
  // printf("Enter length: ");
  // scanf("%f",&l);
  // printf("Enter width: ");
  // scanf("%f",&w);
  // float Perimeter_of_rectangle = 2 * (l+w);
  // printf("The perimeter of a rectangle is: %.2f",Perimeter_of_rectangle);

  /*
  Write a program to calculate the diameter and circumference
  of a circle given its radius.
  */
  // float r, pi = 3.14;
  // printf("Enter a radius of circle: ");
  // scanf("%f",&r);
  // float diameter = 2*r;
  // float circumference = 2*pi*r;
  // printf("The diameter of circle is: %.2f",diameter);
  // printf("\nThe circumference of circle is: %.2f",circumference);

  /*
  Write a program to convert temperature from Fahrenheit to Celsius.
  Formula: C = (F - 32) * 5/9
  */
  // float c,f;
  // printf("Enter temperature in Fahrenheit: ");
  // scanf("%f",&f);
  // c = (f-32)*5/9;
  // printf("The Celsius %.1f to Celsius is %.1f",f,c);

  /*
  Write a program to calculate compound interest using:
  CI = P * (1 + R/100)^T - P
  */
  // #include <math.h>
  // double P,R,T;
  // printf("Enter Principal: ");
  // scanf("%lf", &P);
  // printf("Enter Rate: ");
  // scanf("%lf", &R);
  // printf("Enter Time in years: ");
  // scanf("%lf", &T);
  // double CI = P * pow(1 + R/100.0, T) - P;
  // printf("The compound interest is: %.2lf", CI);

  /*
  Write a program to take an integer as input
  and print its square root using sqrt() from math.h.
  */
  // #include<math.h>
  // float num;
  // printf("Enter number: ");
  // scanf("%f", &num);
  // printf("square root of number is: %.2f", sqrt(num));

  /*
  Write a program that takes two floating-point numbers
  and prints their sum, difference, product, and quotient.
  */
  // float num1,num2;
  // printf("Enter 1st number: ");
  // scanf("%f", &num1);
  // printf("Enter 2nd number: ");
  // scanf("%f", &num2);
  // printf("\nSum: %.2f",num1+num2);
  // printf("\ndifference: %.2f",num1-num2);
  // printf("\nproduct: %.2f",num1*num2);
  // printf("\nquotient: %.2f",num1/num2);

  /*
  Write a program to take a character input
  and print the next character in the ASCII sequence.
  Example: input 'A' → output 'B'
  */
  // char ch;
  // printf("Enter a character: ");
  // scanf("%c", &ch);
  // ch++;
  // printf("The next character is: %c", ch);

  /*
  Write a program that demonstrates escape sequences
  to print formatted text like:

  Name: kmabro
  Age:  19
  City: Sukkur
  */
  // printf("Name:\tkmabro\n");
  // printf("Age:\t19\n");
  // printf("City:\tSukkur\n");

  /*
  Write a program that declares a constant for gravity (9.8)
  and calculates the force on a body given its mass (F = m * g).
  */
  // const float g = 9.8;
  // float m = 30;
  // printf("Force is: %.2f", m*g);

  /*
  Write a program that takes three integers as input
  and calculates their average as a float.
  */
  // float num1,num2,num3;
  // printf("Enter three numbers: ");
  // scanf("%f %f %f",&num1,&num2,&num3);
  // printf("The average is: %.2f", (num1+num2+num3)/3);

  return 0;
}
