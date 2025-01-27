#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);

    if(i==0){
        printf("Zero");
    }
    else if(i>=0){
        printf("Postive");
    }
    else{
        printf("Negative");
    }

}