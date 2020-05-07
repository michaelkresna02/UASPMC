#include<stdio.h>
#include<string.h>

int count;
typedef struct{
    int No;
    char NIK[100]; 
    char name[100]; 
    char tempat[100]; 
    char tanggal[100]; 
    int umur; 
    char kelamin[100]; 
    char gol[100];  
    char status[100];
    char pekerjaan[100];
}penduduk;
penduduk data[1024];
void load(char* filename)
{
    FILE *fptr;
    fptr=fopen(filename,"r+");
    char str[1024];
    int idx;
    int i=0;
    while (fgets(str,1024,fptr)!=NULL){
        char* newData=strtok(str,";");
        idx=0;
        while (newData!=NULL){
            if (idx==0){
                char tmp[20];
                strcpy(tmp,newData);
                data[i].No=atoi(tmp);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==1){
                strcpy(data[i].NIK,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==2){
                strcpy(data[i].name,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==3){
                strcpy(data[i].tempat,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==4){
                strcpy(data[i].tanggal,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==5){
                char temp[10];
                strcpy(temp,newData);
                data[i].umur=atoi(temp);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==6){
                strcpy(data[i].kelamin,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==7){
                strcpy(data[i].gol,newData);
                newData=strtok(NULL,";");
                idx++;
            }
        
            if (idx==8){
                strcpy(data[i].status,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            if (idx==9){
                strcpy(data[i].pekerjaan,newData);
                newData=strtok(NULL,";");
                idx++;
            }
            i++;
        }
    }
    count=i;
    fclose(fptr);
}

void display(){
    printf("No.\tNIK\t\tNama\t\tTmptLhr\tTglLhr\t\tUmur\tJns Klm\tGolDar\tStatus\tPekerjaan\n");
    for(int i=1;i<count;i++){
        printf("%d\t",data[i].No);
        printf("%s\t",data[i].NIK);
        printf("%s\t",data[i].name);
        printf("%s\t",data[i].tempat);
        printf("%s\t",data[i].tanggal);
        printf("%d\t",data[i].umur);
        printf("%s\t",data[i].kelamin);
        printf("%s\t",data[i].gol);
        printf("%s\t",data[i].status);
        printf("%s\n",data[i].pekerjaan);
    }
}

void displaySearch(int i){
    printf("%d\t",data[i].No);
    printf("%s\t",data[i].NIK);
    printf("%s\t",data[i].name);
    printf("%s\t",data[i].tempat);
    printf("%s\t",data[i].tanggal);
    printf("%d\t",data[i].umur);
    printf("%s\t",data[i].kelamin);
    printf("%s\t",data[i].gol);
    printf("%s\t",data[i].status);
    printf("%s\n",data[i].pekerjaan);
}