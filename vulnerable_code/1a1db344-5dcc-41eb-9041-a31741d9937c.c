#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = 6/j;
   l = i/j;
   l = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[10];
    long c[14];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
