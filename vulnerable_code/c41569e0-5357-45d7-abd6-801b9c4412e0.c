#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[63];
    int c[19];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
     }
   printf("%d\n",k);
   return 0;
}
