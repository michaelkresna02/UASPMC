#include<string.h>
#include<string.h>
#include "konfig.h"


int main(){
    char filename[100]="DataPenduduk31122019.csv";
    load(filename);
    for(int i=0;i<20;i++){
        printf("%s,",penduduk[i].NIK);
        printf("%s,",penduduk[i].name);
        printf("%s,",penduduk[i].tempat);
        printf("%s,",penduduk[i].tanggal);
        printf("%d,",penduduk[i].umur);
        printf("%s,",penduduk[i].kelamin);
        printf("%s,",penduduk[i].gol);
        printf("%s,",penduduk[i].alamat);
        printf("%s,",penduduk[i].status);
        printf("%s\n",penduduk[i].pekerjaan);
    }
    return 0;
}