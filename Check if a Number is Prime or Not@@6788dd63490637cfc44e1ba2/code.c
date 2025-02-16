#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(n%i==0){
        printf("Prime");
        return 0;
    }
}   
else{
    printf("Not Prime");
}
}

