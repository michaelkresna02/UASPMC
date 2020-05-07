#include<stdio.h>
#include<string.h>


void sortNum(int a){
    int j;
    int i;
    penduduk temp;
    if(a!=1 && a!=2){
        printf("Pilihan Anda Salah");
    }
    
    if (a==1){
        for (i = 1; i < count; i++)
            for (j = 0; j < count - i; j++) {
                if ((atoi(data[j].NIK))>(atoi(data[j+1].NIK))) {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    if (a==2){
        for (i = 1; i < count; i++)
            for (j = 0; j < count - i; j++) {
                if (data[j].umur>data[j+1].umur) {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    for(i=1;i<count;i++){
        data[i].No=i;
    }
}

void sortAlp(int a){
    penduduk temp;
    int i,j;
    if(a!=1 && a!=2){
        printf("Pilihan Anda Salah");
    }
    if (a==1){
        for (i = 1; i < count; i++)
            for (j = 0; j < count - i; j++) {
                if (strcmp(data[j].name, data[j + 1].name) > 0) {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    if (a==2){
        for (i = 1; i < count; i++)
            for (j = 0; j < count - i; j++) {
                if (strcmp(data[j].tempat, data[j + 1].tempat) > 0) {
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    for(i=1;i<count;i++){
        data[i].No=i;
    }
}
