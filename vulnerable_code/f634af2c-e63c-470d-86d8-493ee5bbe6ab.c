#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[27];
    int c[31];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
