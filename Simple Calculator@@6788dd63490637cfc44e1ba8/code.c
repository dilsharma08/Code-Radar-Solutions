#include<stdio.h>
int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        char ch;
        scanf("%c",&ch);
        switch(ch){
        case '+':
        int res=a+b;printf("%d",res);break;
        case '-':
        int res=a-b;printf("%d",res);break;
        case '*':
        int res=a*b;printf("%d",res);break;

        case '/':
       int  res=a/b;printf("%d",res);break;
     

        }


}
