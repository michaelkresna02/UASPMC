#include <stdio.h>
#include <string.h>

void searching(){
    char r[100];
    int n;
    printf("\n1.NIK\n2.Nama\n3.Tempat Kelahiran\n4.Tanggal Kelahiran\n5.Tanggal Kelahiran\n6.Umur\n7.Jenis Kelamin\n8.Golongan Darah\n9.Status Perkawinan\n10.Pekerjaan\n");
    printf("Masukkan Kategori Yang Ingin Anda Cari:");scanf("%d",&n);
    printf("\n");
    printf("Masukkan Pencarian Anda:");
    scanf(" %[^\n]s",&r);
    
    int found=0;
    int i=1;
    printf("No.\tNIK\t\tNama\t\tTmptLhr\tTglLhr\t\tUmur\tJns Klm\tGolDar\tStatus\tPekerjaan\n");
    while(i<count){
        if(n==1){
        while(strcmp(atoi(r),data[i].NIK)!=0){
        i++;
            }
        }
        else if(n==2){
            while(strcmp(r,data[i].name)!=0){
            i++;
            found==1;
          }
        }
        else if(n==3){
            while(strcmp(r,data[i].tempat)!=0){
            i++;
            found==1;
            }
        }
        else if(n==4){
            while(strcmp(r,data[i].tanggal)!=0){
            i++;
            found==1;
            }
        }
        else if(n==5){
            while(strcmp(atoi(r),data[i].umur)!=0){
            i++;
            found==1;
            }
        }
        else if(n==6){
            while(strcmp(r,data[i].kelamin)!=0){
            i++;
            found==1;
            }
        }
        else if(n==7){
            while(strcmp(r,data[i].gol)!=0){
            i++;
            found==1;
            }
        }
        else if(n==8){
            while(strcmp(r,data[i].status)!=0){
            i++;
            found==1;
            }
        }
        else if(n==9){
            while(strcmp(r,data[i].pekerjaan)!=0){
            i++;
            found==1;
            }
        }
        else{
            i=count;
        }
    displaySearch(i);
    }
    if(n==0){
        printf("Data tidak ditemukan");
    }
}