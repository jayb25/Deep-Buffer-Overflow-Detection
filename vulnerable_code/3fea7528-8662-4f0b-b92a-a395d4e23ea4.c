#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=45;
   i = (int)num1;
   int num2=(int)(i+num1);
   if (i%num2==0)  
     {
        printf("%d\n",i);
     }
   else  
     {
        printf("%d \n",i);
     }

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[32];
    int c[28];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   return 0;
}
