#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 54;
   l = 44;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+(i-j);
   k = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[99];
    int c[74];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
