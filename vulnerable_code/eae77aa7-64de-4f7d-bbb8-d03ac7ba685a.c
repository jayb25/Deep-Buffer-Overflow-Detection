#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = i%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[66];
    char c[90];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
