#include<windows.h>
#include<math.h>

int getumur(char* tanggal){
    SYSTEMTIME now;
    int date=0,month=0,year=0;

    GetSystemTime(&now);

    int tgl=atoi(tanggal);

    for(int i=0;i<4;i++){
        year+=tgl%10*pow(10,i);
        tgl/=10;
    }
    for(int i=0;i<2;i++){
        month+=tgl%10*pow(10,i);
        tgl/=10;
   }
    for(int i=0;i<2;i++){
        date+=tgl%10*pow(10,i);
        tgl/=10;
   }

    if(now.wMonth<month){
        return now.wYear-year-1;
    }
    else if(now.wMonth==month){
        if(now.wDay<date){
        return now.wYear-year-1;
        }
        else{
            return now.wYear-year;
        }
    }
    else{
        return now.wYear-year;
    }
}