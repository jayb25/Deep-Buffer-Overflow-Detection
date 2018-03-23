#include <string.h>
#include <stdio.h>
int main() {
   int i;
   float num1=444;
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
    int b[71];
    int c[94];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   return 0;
}
