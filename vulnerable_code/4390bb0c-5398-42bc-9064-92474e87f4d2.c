#include <string.h>
#include <stdio.h>
int main() {
   int i=00;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i+j;
   l = l%j;
   l = l%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[38];
    int c[20];
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
