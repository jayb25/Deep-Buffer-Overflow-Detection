#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = j-j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[82];
    long c[80];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
