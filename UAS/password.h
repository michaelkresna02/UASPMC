#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void checkPass() {
   char password[25], ch;
   char ref[25]="PMC";
   int i;

   system("cls");
   int cek=0;

   while(cek==0){
       puts("Enter password : ");
 
   while (1) {
      if (i < 0) {
         i = 0;
      }
      ch = getch();
 
      if (ch == 13)
         break;
      if (ch == 8) /*ASCII value of BACKSPACE*/
      {
         putch('b');
         putch(NULL);
         putch('b');
         i--;
         continue;
      }
 
      password[i++] = ch;
      ch = '*';
      putch(ch);
   }
   password[i] = '\0';
   if(strcmp(ref,password)==0){
       cek=1;
   }
   }
   
}