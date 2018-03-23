#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   k = 63;
   l = 64;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k/j;
   l = j-j;
   l = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[93];
    char c[90];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
