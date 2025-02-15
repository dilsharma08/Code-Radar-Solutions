#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch(month){

    }
    case 4: case 6: case 9: case 11:
    printf("30");
    break;
    case 1: case 3:case 5:case 7:case 8:case 10:case 12:
    printf("31");
    case 2:
    if((month%4==0 && month%100!=0)||(month%400==0)){
        printf("29");
      

    }
    else{
        printf("28");
    }
    break;
    default:
    printf("Invalid month");
    break;
}