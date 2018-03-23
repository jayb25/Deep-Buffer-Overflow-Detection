#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i%j;
   l = k-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[62];
    char c[90];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
