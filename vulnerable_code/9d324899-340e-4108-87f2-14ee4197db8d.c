#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=04;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[14];
    char c[14];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
