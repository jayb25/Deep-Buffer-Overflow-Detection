#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 533;
   l = 644;
   k = i/j;
   l = i%j;
   l = i%j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[18];
    int c[50];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
