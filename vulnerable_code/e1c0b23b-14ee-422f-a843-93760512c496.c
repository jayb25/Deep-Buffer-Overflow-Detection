#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 66;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[18];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
