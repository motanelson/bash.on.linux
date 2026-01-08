//gcc -o echo echo.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    char *a;
    char c[4096]="";
    char b[4096]="";
    if (argc<2)return 0;
    
    for(n=1;n<argc;n++){
        //printf("%d ",n);
        if(n!=1)strcat(c," ");
        a=argv[n];
        strcat(c,a);
    }

    while(1){
        b[0]=0;
        
        fgets(b,4095,stdin);
        if(strstr(b,c)!=NULL)printf("%s",b);
        if(feof(stdin))return 0;
    }   
  
    return 0;
}
