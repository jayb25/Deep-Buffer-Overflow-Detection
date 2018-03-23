#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = l-j;
   l = l%j;
   l = j-j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[41];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
