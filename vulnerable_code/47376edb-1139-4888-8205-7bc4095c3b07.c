#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1228;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = i-j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[71];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
