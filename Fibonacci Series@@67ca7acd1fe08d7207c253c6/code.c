#include<stdio.h>

int fibonacciSeries(int n){
    if(n==1){
        return 0;
    }
    else if(n==0){
        return 0;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        printf("%d",fibonacciSeries(i));
    }
}

