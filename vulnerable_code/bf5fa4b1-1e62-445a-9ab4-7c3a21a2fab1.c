#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   j = 53;
   l = 94;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[41];
    int c[59];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
