#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1421;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[54];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
