#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=044;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = k%j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[22];
    char c[63];
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
