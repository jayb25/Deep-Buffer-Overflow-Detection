#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1124;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[20];
    char c[87];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
