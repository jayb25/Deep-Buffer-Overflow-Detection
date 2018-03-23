#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1244;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i%j;
   l = --j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[75];
    int c[85];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
