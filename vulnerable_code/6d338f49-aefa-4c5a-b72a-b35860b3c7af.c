#include <string.h>
#include <stdio.h>
int main() {
   int i=1;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k/j;
   l = i%j;
   l = l+j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[84];
    char c[84];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
