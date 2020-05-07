#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "konfig.h"
#include "sort.h"
#include "add.h"
#include "update.h"
#include "delete.h"
#include "search.h"
#include "umur.h"
#include "save.h"
#include "input.h"
#include "password.h"

int main(){
    checkPass();
    system("cls");
    printf("-----------------Catatan Kependudukan Jawa Barat--------------\n\n");
    char filename[100];
    printf("Masukkan Nama File Eksternal :");scanf("%s",filename);
    load(filename);
    input();
    return 0;
}
