#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[19];
    long c[23];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
     }
   printf("%d\n",l);
   return 0;
}
