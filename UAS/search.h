#include <stdio.h>
#include <string.h>

void searching(int n){
    char r[100];
    printf("Masukkan Pencarian Anda:");
    scanf(" %[^\n]s",&r);
    int i=1;
    while(i<count && strcmp(r,data[i].name)!=0){
        i++;
    }
    if(i==count){
        printf("%s tidak terdaftar\n",r);
    }

    displaySearch(i);
}