#include <stdio.h>
int main()
{
    FILE *fptr;
    /*
Write a program to create a text file "file.txt" and write your name inside it.
Then close the file.
*/
    // fptr = fopen("file.txt", "w");

    // fprintf(fptr, "km_abro");

    /*
Write a program to open "file.txt" in read mode and display its contents character by character
using fgetc until EOF.
*/
    // fptr = fopen("file.txt", "r");

    // int ch;
    // while ((ch = fgetc(fptr)) != EOF) {
    //     putchar(ch);
    // }

    /*
Write a program to append a new line "Learning File Handling in C" into "file.txt"
without overwriting existing content.
*/
    // fptr = fopen("file.txt", "a");

    // fprintf(fptr, "\nLearning File Handling in C\n");

    /*
Write a program to count the number of characters in a file "file.txt".
(Use fgetc in a loop until EOF).
*/
    // fptr = fopen("file.txt", "r");
    // int count = 0;
    // int ch;

    // while ((ch = fgetc(fptr)) != EOF) {
    //     count++;
    // }

    // printf("Number of characters: %d\n", count);

    /*
    Write a program to read three integers from a file.
    */
    // fptr = fopen("file.txt","r");
    // int a,b,c;
    // fscanf(fptr,"%d %d %d",&a,&b,&c);
    // printf("The values are: %d %d %d\n",a,b,c);

    /*
    Write a program to generate multiplication table of a given number in text
    format. Make sure that the file is readable and well formatted.
    */
    // fptr = fopen("file.txt","w");
    // int num;
    // printf("Enter number: ");
    // scanf("%d",&num);
    // for(int i=1;i<=10;i++){
    //     fprintf(fptr, "%d x %d = %d\n", i, num, num * i);
    //     fprintf(fptr,"%c",'\n');
    // }

    // printf("Multiplication table written to file.txt\n");

    // fclose(fptr);

    //     return 0;
    // }

    /*
    Take name and salary of two employees as input from the user and write them to
    a text file in the following format:
    Name1, 3300
    Name2, 7700
    */
    // fptr = fopen("file.txt", "w");

    // char name[50];
    // int salary, noe;
    // printf("Enter the number of employees: ");
    // scanf("%d", &noe);

    // for (int i = 0; i < noe; i++)
    // {
    //     printf("Enter the name of employee: ");
    //     scanf("%s", &name);
    //     printf("Enter the salary of employee: ");
    //     scanf("%s", &salary);
    //     fprintf(fptr, "%s, %d\n", name, salary);
    // }

    // printf("Employee data written successfully to employees.txt\n");

    /*
    Write a program to modify a file containing an integer to double its value.
    */
    // fptr = fopen("file.txt", "r");
    // int num;
    // fscanf(fptr, "%d", &num);
    // fclose(fptr);

    // fptr = fopen("file.txt", "w");
    // fprintf(fptr, "%d", 2*num);

    /*
    Write a program to create a text file and store "Hello, World!" inside it.
    */
    // char str[50] = "Hello, World!";
    // fptr = fopen("file.txt", "w");
    // fprintf(fptr, "%s", str);

    /*
    Write a program to copy the content of one text file into another text file.
    */
    // FILE *fptr1;
    // char ch;

    // fptr = fopen("file.txt", "r");
    // fptr1 = fopen("copied_file.txt", "w");
    // while ((ch = fgetc(fptr)) != EOF)
    // {
    //     fputc(ch, fptr1);
    // }
    // fclose(fptr1);

    /*
    Write a program to count the number of characters in a text file.
    */
    // char ch;
    // int count = 0;

    // fptr = fopen("file.txt", "r");
    // while ((ch = fgetc(fptr)) != EOF)
    // {
    //     count++;
    // }

    // printf("Characters = %d\n", count);

    /*
    Write a program to append user input at the end of an existing text file.
    */
    // char str[100];
    // fptr = fopen("file.txt","a");

    // printf("Enter text to append: ");
    // fgets(str, sizeof(str), stdin);

    // fputs(str, fptr);

    // printf("Text appended successfully!\n");

    // fclose(fptr);

    return 0;
}