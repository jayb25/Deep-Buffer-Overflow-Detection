#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=4.4;
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
    long b[73];
    long c[56];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   return 0;
}
