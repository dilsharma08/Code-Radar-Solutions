#include<stdio.h>
int main(){
         int a,b;
         scanf("%d %d",&a,&b);
         char op;
         scanf(" %c",&op);
switch(op){
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':
       if(!(b=0)){
        printf("%d",a/b);
       }
       else{
        printf("error");
       }
       break;

}
}
