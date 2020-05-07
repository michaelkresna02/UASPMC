
#include<string.h>
#include<stdio.h>
#include "konfig.h"


int main(){
    char filename[100]="DataPenduduk31122019.csv";
    load(filename);
    for(int i=1;i<21;i++){
        printf("%d,",data[i].No);
        printf("%s,",data[i].NIK);
        printf("%s,",data[i].name);
        printf("%s,",data[i].tempat);
        printf("%s,",data[i].tanggal);
        printf("%d,",data[i].umur);
        printf("%s,",data[i].kelamin);
        printf("%s,",data[i].gol);
        //printf("%s,",data[i].alamat);
        printf("%s,",data[i].status);
        printf("%s\n",data[i].pekerjaan);
    }
    return 0;
}