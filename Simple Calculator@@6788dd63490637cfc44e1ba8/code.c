#include<stdio.h>
int main(){
        int a,b;
        scanf("%d %d\n",&a,&b);
        char ch;
        scanf("%c",&ch);
        switch(ch){
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':printf("%d",a/b);break;
     

        }


}
