#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=142;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[56];
    char c[29];
    a = 0;
    while (a < strlen(b)) {
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
