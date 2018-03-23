#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l%j;
   l = i-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[17];
    char c[92];
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
