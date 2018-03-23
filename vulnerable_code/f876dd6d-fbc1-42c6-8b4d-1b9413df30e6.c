#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1284;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = i-j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[69];
    long c[14];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
