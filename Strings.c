#include <stdio.h>
#include <string.h>
int main()
{

  /*
  Write a program to take your first name as input and print:
  "Hello <name>, welcome to C Strings!"
  */
  // char name[100];
  // printf("Enter your name: ");
  // scanf("%s", name);
  // printf("Hello %s, welcome to C Strings!", name);

  /*
  Write a program to calculate the length of a string (without using strlen).
  Example: Input = "C Programming" → Output = 13
  */
  // char str[100];
  // int i =0;

  // fgets(str, 100, stdin);
  // while(str[i] != '\0'){
  //   i++;
  // }
  // printf("Length of string is: %d", i);

  /*
  Write a program that takes a string and prints each character on a new line.
  Example: Input = "Code" → Output:
  C
  o
  d
  e
  */
  // char str[100];
  // int i =0;
  // printf("Enter a string: ");
  // fgets(str, 100, stdin);
  // while(str[i] != '\0' && str[i] != '\n') {
  //   printf("%c\n", str[i]);
  //   i++;
  // }

  /*
  Write a program to copy one string into another (without using strcpy).
  */
  // char str1[100] = "Hello";
  // char str2[100] = "World";
  // int i = 0;
  // while(str1[i] != '\0'){
  //   str2[i] = str1[i];
  //   i++;
  // }
  // printf("str2: %s\n", str2);

  /*
  Write a program to concatenate two strings (without using strcat).
  Example: str1 = "Good", str2 = "Morning" → Output = "GoodMorning"
  */
  // char str1[100] = "Good";
  // char str2[100] = "Morning";
  // int i = 0;
  // int j = 0;
  // while(str1[i] != '\0'){
  //   i++;
  // }
  // while(str2[j] != '\0'){
  //   str1[i] = str2[j];
  //   i++;
  //   j++;
  // }
  // printf("str1: %s\n", str1);

  /*
  Write a program that counts the number of vowels in a string.
  Example: Input = "Programming" → Output = 3
  */
  // char str[100];
  // printf("Enter a string: ");
  // fgets(str, 100, stdin);
  // int i = 0;
  // int count = 0;
  // while(str[i] != '\0' && str[i] != '\n'){
  //   if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
  //     count++;
  //   }
  //   i++;
  // }
  // printf("Number of vowels: %d\n", count);

  /*
  Write a program that finds whether a given character is present in a string or not.
  Example: Input = "Hello", ch = 'e' → Output = Present
  */
  // char str[100];
  // char ch;
  // printf("Enter a string: ");
  // fgets(str, 100, stdin);
  // printf("Enter a character: ");
  // scanf("%c", &ch);
  // int i = 0;
  // int flag = 0;
  // while(str[i] != '\0' && str[i] != '\n'){
  //   if(str[i] == ch){
  //     flag = 1;
  //     break;
  //   }
  //   i++;
  // }
  // if(flag == 1){
  //   printf("Present\n");
  // }
  // else{
  //   printf("Not Present\n");
  // }

  /*
  Write a program to take string input from the user using %c and %s
  and confirm that the strings are equal.
  */
  // char str[5];
  // printf("Enter character: ");
  // for(int i=0;i<4; i++){
  //     scanf("%c",&str[i]);
  //     fflush(stdin);
  // }
  // str[5] = '\0';
  // printf("%s",str);

  // printf("Enter String: ");
  // scanf("%s",str);
  // printf("%s",str);

  /*
  Write your own version of strlen function from <string.h>
  */
  // char str[100];
  // int i = 0;

  // printf("Enter string: ");
  // scanf("%s", str);

  // while(str[i] != '\0') {
  //     i++;
  // }

  // printf("Length of string: %d\n", i);

  /*
  Write a C program that does the following:
  1. Reads a string from the user.
  2. Encrypts the string by adding 1 to the ASCII value of each character.
  3. Displays the encrypted message.
  4. Decrypts the string by subtracting 1 from the ASCII value of each character.
  5. Displays the decrypted (original) message.
  */
  // char str[100];
  // printf("Enter a message: ");
  // fgets(str, sizeof(str), stdin);

  // for(int i = 0;i<strlen(str); i++){
  //     str[i] = str[i]+1;
  // }
  // printf("encrypted messgae: ");
  // printf("%s\n",str);

  // for(int i = 0;i<strlen(str); i++){
  //     str[i] = str[i]-1;
  // }
  // printf("decrypted messgae: ");
  // printf("%s\n",str);

  /*
  Write a program to count the occurrence of a given character in a string.
  */
  // char str[100],c;
  // printf("Enter a message: ");
  // fgets(str, sizeof(str), stdin);

  // printf("Enter a character: ");
  // scanf("%c",&c);

  // int count =0;
  // for(int i = 0;i<strlen(str); i++){
  //     if(str[i]== c){
  //        count++;
  //     }
  // }
  // printf("%d",count);

  /*
  Write a program to check whether a given character is present in a string or not.
  */
  // char str[100],c;
  // printf("Enter a message: ");
  // fgets(str, sizeof(str), stdin);

  // printf("Enter a character: ");
  // scanf("%c",&c);

  // int found = 0;
  // for(int i = 0;i<strlen(str); i++){
  //     if(str[i]==c){
  //         found =1;
  //         break;
  //     }
  // }
  // if(found){
  //     printf("Character '%c' is present in the string.\n", c);
  // }
  // else{
  //     printf("Character '%c' is not present in the string.\n", c);
  // }

  /*
  Write a program to convert all lowercase letters of a string to uppercase.
  */
  // char str[100];

  // printf("Enter a string: ");
  // fgets(str, sizeof(str), stdin);

  // for(int i = 0; str[i] != '\0'; i++) {
  // if(str[i] >= 'a' && str[i] <= 'z') {
  //     str[i] = str[i] - 32;
  //     }
  // }
  // printf("Uppercase string: %s\n", str);

  return 0;
}
