#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=132;
   int k;
   int l;
   k = 53;
   l = 69;
   k = i%j;
   l = i/j;
   l = k%j;
   l = l+j;
   k = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[77];
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
