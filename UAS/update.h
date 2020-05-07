#include<stdio.h>
#include<string.h>
//#include "umur.h"


void ganti(){
    char r[100];
    printf("Masukkan NIK yang akan diupdate:");
    scanf("%s",&r);
    int i=1;
    while(i<count && strcmp(r,data[i].NIK)!=0){
        i++;
    }
    if(i==count){
        printf("NIK tidak terdaftar\n");
    }
    
    printf("Masukkan NIK:");
    scanf("%s",data[i].NIK);
 
    printf("Masukkan Nama:");
    scanf(" %[^\n]s",data[i].name);
 
    
    printf("Masukkan Tempat Lahir:");
    scanf(" %[^\n]s",data[i].tempat);

    
    printf("Masukkan Tanggal Lahir:");
    scanf("%s",data[i].tanggal);

    int tmp=getumur(data[i].tanggal);
    data[i].umur=tmp;

    //printf("Masukkan umur:\n");
    //scanf("%s",&penduduk[i].umur);

    printf("Masukkan Kelamin:");
    scanf("%s",data[i].kelamin);

    printf("Masukkan Golongan Darah:");
    scanf("%s",data[i].gol);
        
    printf("Masukkan Status:");
    scanf("%s",data[i].status);

    printf("Masukkan Pekerjaan:");
    scanf(" %[^\n]s",data[i].pekerjaan);

    printf("\nData berhasil diubah!\n");

}