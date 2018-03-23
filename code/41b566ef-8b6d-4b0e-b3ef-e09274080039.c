#include <stdio.h>
int main() {
   int i;
   float num1=485;
   i = (int)num1;
   int num2=(int)(i+num1);
   if (i%num2==0)  
     {
        printf("%d\n",i);
     }
   else  
     {
        printf("%d\n",i);
     }
   printf("vulnerability");
   return 0;
}
