#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j%j;
   l = i/j;
   j = i-j;
   l = j%j;
   l = l-j;
   l = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[84];
    long c[61];
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
