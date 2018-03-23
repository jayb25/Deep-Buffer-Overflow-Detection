#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 164;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[16];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
