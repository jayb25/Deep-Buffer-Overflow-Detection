#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[24];
    char c[35];
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
