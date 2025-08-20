#include <stdio.h>
int main()
{

  /*
  Write a program to define a structure "student" with fields: name, roll number, and cgpa.
  Take input for one student and print the details.
  */
  // struct student{
  //     char name[100];
  //     int roll;
  //     float cgpa;
  // };
  // struct student s1;
  // printf("Enter name: ");
  // scanf("%s", s1.name);
  // printf("Enter roll number: ");
  // scanf("%d", &s1.roll);
  // printf("Enter cgpa: ");
  // scanf("%f", &s1.cgpa);
  // printf("Name: %s\n", s1.name);
  // printf("Roll number: %d\n", s1.roll);
  // printf("Cgpa: %.2f\n", s1.cgpa);

  /*
  Write a program to create an array of 3 students using a structure.
  Take input for all students and display their details.
  */
  // struct student{
  //     char name[100];
  //     int roll;
  //     float cgpa;
  // };
  // struct student s[3];
  // for(int i=0;i<3;i++){
  //     printf("Enter name: ");
  //     scanf("%s", s[i].name);
  //     printf("Enter roll number: ");
  //     scanf("%d", &s[i].roll);
  //     printf("Enter cgpa: ");
  //     scanf("%f", &s[i].cgpa);
  //     printf("\n");
  // }
  // for(int i=0;i<3;i++){
  //     printf("Name: %s\n", s[i].name);
  //     printf("Roll number: %d\n", s[i].roll);
  //     printf("Cgpa: %.2f\n", s[i].cgpa);
  //     printf("\n");
  // }

  /*
  Write a program to initialize a structure "student" directly while declaring it,
  and then print the values.
  */
  // struct student{
  //     char name[100];
  //     int roll;
  //     float cgpa;
  // };
  // struct student s1 = {"km_abro", 123, 3.4};
  // printf("Name: %s\n", s1.name);
  // printf("Roll number: %d\n", s1.roll);
  // printf("Cgpa: %.2f\n", s1.cgpa);

  /*
  Write a program to demonstrate the use of structure pointer.
  Take input for one student and print details using "->" operator.
  */
  // struct student{
  //     char name[100];
  //     int roll;
  //     float cgpa;
  // };
  // struct student s1;
  // struct student *ptr = &s1;
  // printf("Enter name: ");
  // scanf("%s", ptr->name);
  // printf("Enter roll number: ");
  // scanf("%d", &ptr->roll);
  // printf("Enter cgpa: ");
  // scanf("%f", &ptr->cgpa);
  // printf("\n");
  // printf("Name: %s\n", ptr->name);
  // printf("Roll number: %d\n", ptr->roll);
  // printf("Cgpa: %.2f\n", ptr->cgpa);

  /*
  Write a program to define a structure "address" with fields: houseNo, block, city, state.
  Take input for one address and print it in proper format.
  */
  // struct address{
  //     int houseNo;
  //     char block[100];
  //     char city[100];
  //     char state[100];
  // };
  // struct address a1;
  // printf("Enter house number: ");
  // scanf("%d", &a1.houseNo);
  // printf("Enter block: ");
  // scanf("%s", a1.block);
  // printf("Enter city: ");
  // scanf("%s", a1.city);
  // printf("Enter state: ");
  // scanf("%s", a1.state);
  // printf("\n");
  // printf("House number: %d\n", a1.houseNo);
  // printf("Block: %s\n", a1.block);
  // printf("City: %s\n", a1.city);
  // printf("State: %s\n", a1.state);
  // printf("\n");

  /*Write a program to store the details of 3 employees from user defined data.
  Use the structure*/
  // #include <stdio.h>
  // struct emp {
  //     int id;
  //     char name[10];
  //     float salary;
  // };

  // int main() {
  //     struct emp e1,e2,e3;

  //     printf("ID: ");
  //     scanf("%d", &e1.id);

  //     printf("Name: ");
  //     scanf("%s", &e1.name);

  //     printf("Salary: ");
  //     scanf("%f", &e1.salary);

  //     printf("%d %s %f\n",e1.id,e1.name,e1.salary);

  //     printf("ID: ");
  //     scanf("%d", &e2.id);

  //     printf("Name: ");
  //     scanf("%s", &e2.name);

  //     printf("Salary: ");
  //     scanf("%f", &e2.salary);

  //     printf("%d %s %f\n",e2.id,e2.name,e2.salary);

  //     printf("ID: ");
  //     scanf("%d", &e3.id);

  //     printf("Name: ");
  //     scanf("%s", &e3.name);

  //     printf("Salary: ");
  //     scanf("%f", &e3.salary);

  //     printf("%d %s %f\n",e3.id,e3.name,e3.salary);

  //     return 0;
  // }

  /*
  Create a two-dimensional vector using structures in C.
  */
  // #include<stdio.h>

  // struct vector{
  //     int i,j;
  // };

  // int main(){
  //     struct vector v1 = {1,2};
  //     printf("%d %d", v1.i,v1.j);

  //     return 0;
  // }

  /*
  Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
  The vectors must be two–dimensional.
  */
  // #include<stdio.h>

  // struct vector{
  //     int i,j;
  // };

  // struct vector sumvector(struct vector v1, struct vector v2){
  //     struct vector v3 = {(v1.i+v2.i), (v1.j+v2.j)};
  //     return v3;
  // }

  // int main(){
  //     struct vector v1 = {1,2};
  //     struct vector v2 = {3,4};
  //     struct vector v3  = sumvector(v1,v2);
  //     printf("%di %dj", v3.i,v3.j);

  //     return 0;
  // }

  /*
  Write a program to illustrate the use of arrow operator → in C.
  */
  // #include <stdio.h>

  // struct student {
  //     int id;
  //     char name[50];
  // };

  // int main() {
  //     struct student s1 = {101, "kmabro"};
  //     struct student *ptr;

  //     ptr = &s1;

  //     printf("Student ID: %d\n", ptr->id);
  //     printf("Student Name: %s\n", ptr->name);

  //     return 0;
  // }

  /*
  Write a program with a structure representing a complex number.
  */
  // #include<stdio.h>

  // struct complex{
  //     int r,i;
  // };

  // int main(){
  //     struct complex v1 = {1,2};
  //     printf("%d+%di", v1.r,v1.i);

  //     return 0;
  // }

  /*
  Create an array of 5 complex numbers created in Problem 5 and display them
  with the help of a display function. The values must be taken as input from
  the user.
  */
  // #include <stdio.h>

  // typedef struct c
  // {
  //     int real;
  //     int imaginary;
  // } Complex;

  // void display(Complex c)
  // {
  //     printf("%d+%di\n", c.real, c.imaginary);
  // }

  // int main()
  // {
  //     Complex com[5];
  //     for (int i = 0; i < 5; i++)
  //     {
  //         printf("Enter real part: ");
  //         scanf("%d", &com[i].real);
  //         printf("Enter imaginary part: ");
  //         scanf("%d", &com[i].imaginary);
  //         display(com[i]);
  //     }

  //     return 0;
  // }

  /*
  Create a structure representing a bank account of a customer.
  */
  // #include<stdio.h>

  // struct bankaccount
  // {
  //     int account_number;
  //     char name[40];
  //     char ifsc[12];
  //     float balance;
  // };

  // int main(){
  //  struct bankaccount cust;

  // printf("Enter account number: ");
  // scanf("%d", &cust.account_number);
  // getchar();
  // printf("Enter name: ");
  // fgets(cust.name, sizeof(cust.name), stdin);
  // printf("Enter IFSC code: ");
  // scanf("%s", cust.ifsc);
  // printf("Enter balance: ");
  // scanf("%f", &cust.balance);

  // printf("\nAccount Number: %d\n", cust.account_number);
  // printf("Name: %s", cust.name);
  // printf("IFSC Code: %s\n", cust.ifsc);
  // printf("Balance: %.2f\n", cust.balance);

  //     return 0;
  // }

  /*
  Write a program to input and display details of a book
  (title, author, price) using a structure.
  */
  // #include<stdio.h>

  // struct Book{
  //     char title[50];
  //     char author[50];
  //     int price;
  // };

  // int main(){
  // struct Book b1;
  // printf("Enter title of book: ");
  // fgets(b1.title, sizeof(b1.title),stdin);

  // printf("Enter author of book: ");
  // fgets(b1.author, sizeof(b1.author),stdin);

  // printf("Enter Price of book: ");
  // scanf("%d",&b1.price);

  // printf("\n--- Book Details ---\n");
  // printf("Title : %s", b1.title);
  // printf("Author: %s", b1.author);
  // printf("Price : %d\n", b1.price);

  //     return 0;
  // }

  return 0;
}
