#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1242;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[58];
    long c[59];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
