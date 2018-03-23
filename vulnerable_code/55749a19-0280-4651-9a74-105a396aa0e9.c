#include <string.h>
#include <stdio.h>
int main() {
   float i=40;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = i-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[25];
    long c[73];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
