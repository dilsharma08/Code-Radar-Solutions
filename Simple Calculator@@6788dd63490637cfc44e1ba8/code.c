#include <stdio.h>

int main(){
    int a,b ;
    char res;
    scanf("%d %d %c",&a,&b,&res);
    switch(res){
    case '+':
    printf("%d",a+b);
break;

case '-':
printf("%d",a-b);
break ;

case '*':
printf("%d",a*b);
break ;

case '/':
printf("%f",a/b);
break;
   }
}