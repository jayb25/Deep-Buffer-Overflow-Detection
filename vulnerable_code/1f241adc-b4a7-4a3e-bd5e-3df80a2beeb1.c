#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[80];
    long c[5];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
