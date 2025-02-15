#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    switch(n){
        case 'R':
        printf("Stop");
        break;

       case 'G':
       printf("GO")
       break;
       case 'Y';
       printf("Slow Down");
       break;
       default :
       printf("Invalid input");
       break;

    }
}