#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=120;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = l/j;
   l = k%j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[35];
    char c[6];
    a = 0;
    do {
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
