#include<stdio.h>
#include<string.h>



void hapusdata(){
    int i;
    char r[20];

    printf("Masukkan NIK yang akan dihapus: ");
    scanf("%s",r);
    i=1;
    while(i<count && strncmp(data[i].NIK,r,strlen(r))!=0){
        i++;
    }
    if(i==count){
        printf("NIK tidak terdaftar\n");
    }
    else{
        for(i=i+1;i<count;i++){
            data[i-1].No=data[i].No-1;
            strcpy(data[i-1].NIK,data[i].NIK);
            strcpy(data[i-1].name,data[i].name);
            strcpy(data[i-1].tempat,data[i].tempat);
            strcpy(data[i-1].tanggal,data[i].tanggal);
            data[i-1].umur=data[i].umur;
            strcpy(data[i-1].kelamin,data[i].kelamin);
            strcpy(data[i-1].gol,data[i].gol);
            strcpy(data[i-1].status,data[i].status);
            strcpy(data[i-1].pekerjaan,data[i].pekerjaan);
        }
        printf("deleted\n");
        count-=1;
    }
}
