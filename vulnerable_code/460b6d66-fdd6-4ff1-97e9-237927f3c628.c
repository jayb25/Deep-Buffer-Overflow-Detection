#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=4554;
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

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[69];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   return 0;
}
