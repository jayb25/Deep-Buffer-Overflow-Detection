#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=424;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = k%j;
   k = k-k*i;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[19];
    int c[85];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
