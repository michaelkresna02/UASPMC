#include<stdio.h>
#include<string.h>
#include<time.h>
#include "konfig.h"
#include "search.h"

int main(){
    char filename[100]="DataPenduduk31122019.csv";
    load(filename);
    searching(1);

    return 0;

}