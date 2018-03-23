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
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[54];
    long c[21];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   return 0;
}
