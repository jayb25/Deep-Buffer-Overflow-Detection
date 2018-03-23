#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=114;
   int k;
   int l;
   k = 51;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[9];
    char c[63];
    a = 0;
    while (a < strlen(b)) {
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
