#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   for(num=0;num<n;num++)
   if(num>=1 && num<=100){
    printf("In range");
   }
   else{
    printf("Out of Range");
   }
    return 0;
}