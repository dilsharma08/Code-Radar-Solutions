#include <stdio.h>

int main(){
    int a,b ;
    char res;
    scanf("%d %d %c",&a,&b,&res);
    switch(res){
    case '+':
    int sum =a+b;
    printf("%d",sum);
break;

case '-':
int sub =a-b ;
printf("%d",sub);
break ;

case '*':
int mul=a*b;
printf("%d",mul);
break ;

case '/':
div=a/b;
printf("%d",div);
break;
   }
}