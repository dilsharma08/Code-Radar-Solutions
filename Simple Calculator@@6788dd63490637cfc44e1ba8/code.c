#include<stdio.h>
int main(){
        int a,b,res;
        scanf("%d %d",&a,&b);
        char ch;
        scanf(" %c",&ch);
        switch(ch){
        case '+':
         res=a+b;printf("%d",res);break;
        case '-':
         res=a-b;printf("%d",res);break;
        case '*':
         res=a*b;printf("%d",res);break;

        case '/':
         res=a/b;printf("%d",res);break;
     

        }


}

