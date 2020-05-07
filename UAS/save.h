#include<stdio.h>
#include<string.h>

void saving(char* filename){
    FILE *fptr;
    fptr=fopen(filename,"w+");

    int i;
    if(fptr == NULL)
    {
        printf("File tidak ditemukan!\n");
        exit(1);
    }
    for(i=0;i<count;i++){
        //fwrite(data, sizeof(data),1,fptr);
        if (data!=NULL){
            fprintf(fptr,"%d;",data[i].No);
            fprintf(fptr,"%s;",data[i].NIK);
            fprintf(fptr,"%s;",data[i].name);
            fprintf(fptr,"%s;",data[i].tempat);
            fprintf(fptr,"%s;",data[i].tanggal);
            fprintf(fptr,"%d;",data[i].umur);
            fprintf(fptr,"%s;",data[i].kelamin);
            fprintf(fptr,"%s;",data[i].gol);
            fprintf(fptr,"%s;",data[i].status);
            fprintf(fptr,"%s",data[i].pekerjaan);
        }
        
    }
    printf("\n");
    printf("\nData berhasil disimpan!\n");
    fclose(fptr);
}
