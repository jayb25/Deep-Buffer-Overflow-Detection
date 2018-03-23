#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 533;
   l = 65;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[5];
    char c[16];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
