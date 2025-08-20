#include <stdio.h>

int main()
{

  /*
  Write a program to declare an integer variable, assign it a value,
  and then create another variable that stores twice its value.
  Finally, print both variables.
  */
  // int num1 = 10;
  // int num2 = num1 * 2;
  // printf("%d %d\n", num1, num2);

  /*
  Write a program to declare variables in a single statement, assign the same
  value to all of them, and print their values.
  */
  // int a, b, c, d;
  // a = b = c = d = 10;
  // printf("%d %d %d %d \n", a, b, c, d);

  /*
  Write a program that takes the radius of a circle from the user,
  calculates its area using a separate 'pi' variable, and prints the result.
  Make sure to declare variables before using them.
  */
  // float radius;
  // float pi = 3.14159;
  // printf("Enter the radius of the circle: ");
  // scanf("%f", &radius);
  // float area = pi * radius * radius;
  // printf("The area of the circle is: %.2f\n", area);

  /*
  Write a program to calculate and print:
  sum, difference, product, quotient, and remainder of two integers entered by the user.
  */
  // float num1, num2;
  // printf("Enter first numbers: ");
  // scanf("%f", &num1);
  // printf("Enter second numbers: ");
  // scanf("%f", &num2);

  // printf("Sum: %.2f\n", num1 + num2);
  // printf("Difference: %.2f\n", num1 - num2);
  // printf("Product: %.2f\n", num1 * num2);
  // printf("Quotient: %.2f\n", num1 / num2);
  // printf("Remainder: %.2f\n", (float)((int)num1 % (int)num2));

  /*
  Write a program that takes an integer and a float from the user,
  adds them, and prints the result as a float.
  */
  // int num1;
  // float num2;
  // printf("Enter an integer: ");
  // scanf("%d", &num1);
  // printf("Enter a float: ");
  // scanf("%f", &num2);
  // printf("The sum is: %.2f\n", num1 + num2);

  /*
  Write a program to show the effect of type conversion:
  Add an int and a float, print the result as int and as float.
  */
  // int num1 = 10;
  // float num2 = 20.5;
  // printf("The sum as int: %d\n", num1 + (int)num2);
  // printf("The sum as float: %.2f\n", num1 + num2);

  /*
  Write a program to demonstrate operator precedence by printing
  the result of: 5 + 2 / 2 * 3
  */
  // printf("\"5 + 2 / 2 * 3\" \n");
  // printf("The result is: %d\n", 5 + 2 / 2 * 3);

  /*
  Write a program to calculate:
  x = 4 * 3 / 6 * 2
  and print the result.
  */
  // printf("x = 4 * 3 / 6 * 2\n");
  // printf("The result is: %d\n", 4 * 3 / 6 * 2);

  /*
  Write a program that takes two integers from the user
  and prints whether the first is equal to, less than, or greater than the second.
  */
  // int a,b;
  // printf("Enter first number: ");
  // scanf("%d", &a);
  // printf("Enter second number: ");
  // scanf("%d", &b);
  // printf("a = b: %d\n", a == b);
  // printf("a < b: %d\n", a < b);
  // printf("a > b: %d\n", a > b);

  /*
  Write a program that takes a number and prints:
  1 if it is even and greater than 10, otherwise 0.
  (Use logical operators && and relational operators)
  */
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // printf("The result is: %d\n", num % 2 == 0 && num > 10);

  /*
  Write a program that takes three integers from the user
  and prints 1 if at least one of them is positive, otherwise 0.
  (Use logical OR ||)
  */
  // int a, b, c;
  // printf("Enter three numbers: ");
  // scanf("%d %d %d", &a, &b, &c);
  // printf("The result is: %d\n", a > 0 || b > 0 || c > 0);

  /*
  Write a program to take two integers and print 1 if exactly one of them
  is positive, otherwise print 0.
  (Use logical operators and NOT !)
  */
  // int a, b;
  // printf("Enter two numbers: ");
  // scanf("%d %d", &a, &b);
  // int result = (a > 0 && !(b > 0)) || (!(a > 0) && b > 0);
  // printf("%d\n", result);

  /*
  Write a program to demonstrate assignment operators:
  Start with an integer 'a' = 10, then:
  add 5, subtract 3, multiply by 2, divide by 4, and take remainder with 3.
  Print the value of 'a' after each operation.
  */
  // int a = 10;
  // printf("a = %d\n", a);
  // a += 5;
  // printf("a = %d\n", a);
  // a -= 3;
  // printf("a = %d\n", a);
  // a *= 2;
  // printf("a = %d\n", a);
  // a /= 4;
  // printf("a = %d\n", a);
  // a %= 3;
  // printf("a = %d\n", a);

  /*
  Write a program that uses +=, -=, *=, /=, and %= to update a variable
  based on user input.
  */
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printf("a = %d\n", a);
  // a += 5;
  // printf("a = %d\n", a);
  // a -= 3;
  // printf("a = %d\n", a);
  // a *= 2;
  // printf("a = %d\n", a);
  // a /= 4;
  // printf("a = %d\n", a);
  // a %= 3;
  // printf("a = %d\n", a);

  /*
  Write a program that calculates the average of 3 test scores
  and prints whether the average is greater than or equal to 50.
  (Use relational and logical operators together)
  */
  // int a, b, c;
  // printf("Enter three test scores: ");
  // scanf("%d %d %d", &a, &b, &c);
  // float avg = (a + b + c) / 3.0;
  // printf("The average is: %.2f\n", avg);
  // printf("The average is greater than or equal to 50: %d\n", avg >= 50);

  /*
  What data type will the expression 3.0/8 - 2 return?
  */
  // printf("%f\n", 3.0/8 - 2);

  /*
  Write a program to check whether a number is divisible by 97 or not.
  */
  // int num;
  // printf("Enter Number: ");
  // scanf("%d", &num);
  // if (num%97==0){
  //     printf("The given number %d is divisible 97.",num);
  // }
  // else{
  //     printf("The given number %d is not divisible 97.",num);
  // }

  /*
  Explain step-by-step evaluation of 3*x/y - z + k, where x=2, y=3, z=3, k=1.
  (Show how operator precedence and associativity determine the result.)
  */
  // //3*x/y - z + k --> 3*2/3 - 3 + 1 --> 6/3 - 3 + 1 --> 2 - 3 + 1 --> 0
  // int x=2, y=3, z=3, k=1;
  // printf("%d\n", 3*x/y - z + k);

  /*
  Write a program that reads an integer n and prints:
  n % 2, n % 5, and n % -5.
  Observe the sign of the remainder in C and explain why it happens.
  */
  // int n;
  // printf("Enter a number: ");
  // scanf("%d", &n);
  // printf("%d\n",n % 2);
  // printf("%d\n",n % 5);
  // printf("%d\n",n % -5);

  /*
  Write a program that reads integers a, b, c and prints:
  (a*b)/c and a*(b/c) and a*b/c
  to demonstrate left-to-right associativity and how parentheses change results.
  */
  // int a,b,c;
  // printf("Enter 3 numbers: ");
  // scanf("%d %d %d", &a, &b, &c);
  // printf("outputs\n");
  // printf("%d\n",(a*b)/c);
  // printf("%d\n",a*(b/c));
  // printf("%d\n",a*b/c);

  /*
  Without using pow(), read integers x (>=0) and y (>=0) and compute x^y using a loop.
  Print intermediate products to show how the value grows.
  */
  // #include<math.h>
  // int x,y;
  // printf("Enter x (>=0): ");
  // scanf("%d",&x);
  // printf("Enter y (>=0): ");
  // scanf("%d",&y);

  // int result = 1;
  // for(int i=1; i<=y; i++){
  //     result *= x;
  //     printf("Step %d: %d\n", i, result);
  // }
  // printf("Final result: %d^%d = %d\n", x,y,result);

  /*
  Read two integers p and q.
  Print integer division p/q and precise floating result (cast at least one operand).
  */
  // int p,q;
  // printf("Enter p: ");
  // scanf("%d",&p);
  // printf("Enter q: ");
  // scanf("%d",&q);
  // printf("p/q is: %.2d\n", p/q);
  // printf("p/q is: %.2f\n", (float)p/q);

  /*
  Read integers a, b, c and compute three expressions:
  E1 = a*b/c
  E2 = (a*b)/c
  E3 = a*(b/c)
  */
  // int a,b,c;
  // printf("Enter 3 numbers: ");
  // scanf("%d %d %d", &a, &b, &c);
  // printf("outputs\n");
  // int E1 = a*b/c;
  // int E2 = (a*b)/c;
  // int E3 = a*(b/c);
  // printf("%d\n",E1);
  // printf("%d\n",E2);
  // printf("%d\n",E3);

  /*
  Read a float f and assign it to an int i (i = f).
  Print f and i to demonstrate demotion (loss of fractional part).
  Then assign an int j to a float g (g = j) and print both to show promotion.
  */
  // float f;
  // printf("Enter a float: ");
  // scanf("%f",&f);

  // int i = f;
  // printf("f = %f\n",f);
  // printf("i = %d\n",i);

  // int j;
  // printf("Enter an integer: ");
  // scanf("%d",&j);

  // float g = j;
  // printf("j = %d\n",j);
  // printf("g = %f\n",g);

  /*
  Write a program that reads x, y, z, k from the user and evaluates:
  3*x/y - z + k
  Print the result while showing step-by-step values:
  t1 = 3*x, t2 = t1/y, t3 = t2 - z, t4 = t3 + k.
  */
  // double x,y,z,k;
  // printf("Enter four numbers: ");
  // scanf("%lf %lf %lf %lf",&x, &y, &z, &k);
  // double t1 = 3*x;
  // printf("%lf\n",t1);
  // double t2 = t1/y;
  // printf("%lf\n",t2);
  // double t3 = t2 - z;
  // printf("%lf\n",t3);
  // double t4 = t3 + k;
  // printf("%lf\n",t4);

  /*
  Read an integer value 'minutes' and convert it to hours and minutes using / and %.
  Example: 135 minutes -> 2 hours, 15 minutes.
  */
  // int mins;
  // printf("Enter minutes: ");
  // scanf("%d",&mins);
  // int hours = mins/60;
  // int rem_min = mins%60;
  // printf("%d minutes -> %d hours, %d minutes" ,mins, hours, rem_min);

  /*
  Read a positive integer and compute the sum of its digits using only / and %.
  */
  // int n, sum = 0;
  // printf("Enter a positive integer: ");
  // scanf("%d",&n);

  // while(n>0){
  //     sum = sum + n%10;
  //     n = n/10;
  // }

  // printf("Sum of digits = %d\n", sum);

  /*
  Given a file size in bytes and a block size of 4096 bytes, compute:
  - the number of blocks required (ceiling division),
  - the internal fragmentation (blocks*4096 - size).
  Read size from input and print both values.
  */
  // int size,b,f;

  // printf("Enter file size in bytes: ");
  // scanf("%d", &size);

  // b = (size + 4096 - 1) / 4096;
  // f = b * 4096 - size;

  // printf("Blocks required = %d\n", b);
  // printf("Internal fragmentation = %d\n", f);

  /*
  Read three integers and print their average twice:
  1) using pure int arithmetic,
  2) using float arithmetic (with explicit casts).
  */
  // int a,b,c;
  // printf("Enter 3 numbers: ");
  // scanf("%d %d %d",&a, &b, &c);

  // int avg_int = (a+b+c)/3;
  // printf("int arithmetic: %d\n", avg_int);

  // float avg_float = (float)(a+b+c)/3;
  // printf("float arithmetic: %f\n", avg_float);

  /*
  Simulate a simple calculator for two numbers using only arithmetic operators:
  read a, b and print:
  sum (a+b), difference (a-b), product (a*b), integer_quotient (a/b), remainder (a%b).
  Ensure you handle b==0 for division/modulus safely.
  */
  // int a,b;
  // printf("Enter a: ");
  // scanf("%d", &a);
  // printf("Enter b: ");
  // scanf("%d", &b);

  // printf("Sum = %d\n", a + b);
  // printf("Difference = %d\n", a - b);
  // printf("Product = %d\n", a * b);
  // if(b != 0 ){
  //     printf("Integer quotient = %d\n", a / b);
  //     printf("Remainder = %d\n", a % b);
  // }
  // else{
  //     printf("Division and modulus not defined when b = 0\n");
  // }

  return 0;
}
