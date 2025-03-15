#include<stdio.h>
int fibonacciSeries(int x);
int fib(int x){
    if(x=1){
        return 1;
    }
    else if(x=0){
        return 0;
    }
    else{
        return fibonacciSeries(x-1)+fib(x-2);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        printf("%d",fib(i));
    }
}

