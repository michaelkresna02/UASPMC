#include<stdio.h>
#include<string.h>
#include<time.h>
//#include "konfig.h"
//#include "umur.h"


void add(){
    int i=count;
    data[i].No=i;

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
    scanf(" %[^\n]s",data[i].status);

    printf("Masukkan Pekerjaan:");
    scanf(" %[^\n]s",data[i].pekerjaan);
    
    count=i+1;
    printf("\nData berhasil ditambahkan!\n");
}