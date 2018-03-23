#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=114;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l+j;
   l = l-4;
   i = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[29];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
