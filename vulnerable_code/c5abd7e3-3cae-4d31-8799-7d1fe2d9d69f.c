#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i%j;
   l = l/j;
   l = i-j;
   l = j-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[35];
    char c[63];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
