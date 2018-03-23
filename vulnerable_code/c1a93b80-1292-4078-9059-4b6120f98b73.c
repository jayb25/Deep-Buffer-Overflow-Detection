#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 538;
   l = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k/j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[54];
    int c[83];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
