#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=144;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l/j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[50];
    int c[75];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
