#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   k = 644;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[75];
    int c[74];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
