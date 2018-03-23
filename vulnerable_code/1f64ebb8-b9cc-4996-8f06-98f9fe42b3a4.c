#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=148;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[91];
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
