#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=32;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = l%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[18];
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
