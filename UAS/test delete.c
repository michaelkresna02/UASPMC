#include<stdio.h>
#include<string.h>
#include<time.h>
#include "konfig.h"
#include "delete.h"

int main(){
    char filename[100]="DataPenduduk31122019.csv";
    load(filename);
    hapusdata();
    for(int i=1;i<count;i++){
        printf("%d,",data[i].No);
        printf("%s,",data[i].NIK);
        printf("%s,",data[i].name);
        printf("%s,",data[i].tempat);
        printf("%s,",data[i].tanggal);
        printf("%d,",data[i].umur);
        printf("%s,",data[i].kelamin);
        printf("%s,",data[i].gol);
        printf("%s,",data[i].status);
        printf("%s\n",data[i].pekerjaan);
    }

    return 0;
}