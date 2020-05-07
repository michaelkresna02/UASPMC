#include<stdio.h>
#include<conio.h>
#include<string.h>
 
void checkPass() {
   char password[55];
   char username[55]; 
   char ref2[25]="admin";
   char ref[25]="PMC";
   int cek=0;

   while(cek==0){
    printf("Enter Username:\n");scanf("%s",username);printf("\n");
    printf("Enter Password:\n"); 
    int p=0; 
    do{ 
        password[p]=getch(); 
        if(password[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(password[p-1]!='\r'); 
    password[p-1]='\0';
    if((strcmp(ref,password)==0)&&(strcmp(ref2,username)==0)){
        cek=1;
    } 
    else if(cek==0){
        printf("\n\nUsername atau Password salah, silahkan coba lagi\n\n");
    }
   }
    printf("\nYou are in.\n");
    printf("Press Any Key To Continue\n\n"); 
    getch();
}