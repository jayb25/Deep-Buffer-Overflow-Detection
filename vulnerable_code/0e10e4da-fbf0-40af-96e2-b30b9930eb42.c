#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 14;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l/j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[36];
    char c[98];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
