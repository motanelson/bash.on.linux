//gcc -o more more.c -lm
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<math.h>

int main(int argc , char *argv[]){
    int n=1;
    FILE *f1;
    char *a;
    char c[4096]="";
    char b[4096]="";
    n=0;

    while(1){
        b[0]=0;
        
        fgets(b,4095,stdin);
        printf("%s",b);
        n++;
        if(n>15){
            n=0;
            time_t now1 =time(0);
            time_t now2 =time(0);
            double seconds =0.000;
            while(1){
                now1 =time(0);
                seconds = difftime(now1, now2);
                if(abs(seconds)>5)break;
            }
        }
        if(feof(stdin))return 0;
    }   
  
    return 0;
}
