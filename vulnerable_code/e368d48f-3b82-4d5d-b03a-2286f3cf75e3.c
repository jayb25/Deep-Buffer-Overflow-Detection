#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=44;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = k-j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[31];
    long c[92];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
