#include<stdio.h>
#include<string.h>

void input(){
    int n,c;
    char filename[100];
    do{
        printf("\nMasukan Menu yang diinginkan:\n");
        printf("1. Show Data\n2.Add Data\n3.Update Data\n4.Delete Data\n5.Search\n6.Sort Data\n7.Save\n8.Exit\n");
        printf("Enter your choice:");scanf("%d",&n);
        printf("\n");
        switch(n){
            case 1:
            display();
            break;

            case 2:
            add();
            break;

            case 3:
            ganti();
            break;

            case 4:
            hapusdata();
            break;

            case 5:
            searching(1);
            break;

            case 6:
            printf("Apa yang ingin anda urutkan?\n1.NIK\n2.Umur\n3.Nama\n4.Tempat");
            printf("Masukkan pilihan Anda:");scanf("%d",&c);
            printf("\n");
            if (c==1){
                sortNum(1);
            }
            else if(c==2){
                sortNum(2);
            }
            else if(c==3){
                sortAlp(1);
            }
            else if(c==4){
                sortAlp(2);
            }
            else{
                printf("Masukkan anda salah. Kembali ke program utama...\n");
            }
            break;

            case 7:
            printf("Masukkan Nama File Untuk Menyimpan Data:");scanf("%s",filename);
            saving(filename);
            break;
            
            case 8:
            exit(1);
            break;

            default:
            printf("Pilihan Anda salah. Silahkan coba lagi\n");
            break;
        }
    } while (n!=8);
}

