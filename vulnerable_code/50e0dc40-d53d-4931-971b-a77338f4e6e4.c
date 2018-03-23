#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 664;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j%j;
   l = i-j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[85];
    char c[49];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
