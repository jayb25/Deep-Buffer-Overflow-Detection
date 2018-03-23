#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = i+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[43];
    char c[6];
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
