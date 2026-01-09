//gcc -o head head.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=1;
    FILE *f1;
    char *a;
    int i=0;
    char c[4096]="";
    char b[4096]="";
    if(argc<2)return 0;
    i=atoi(argv[1]);
    while(1){
        b[0]=0;
        
        fgets(b,4095,stdin);
        printf("%d %s",n,b);
        if(n>=i)return 0;
        n++;
        if(feof(stdin))return 0;
    }   
  
    return 0;
}
