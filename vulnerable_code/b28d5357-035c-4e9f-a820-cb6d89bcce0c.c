#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=1482;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j-j;
   l = j%j;
   l = l-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[39];
    a = 0;
    do {
        //random
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
