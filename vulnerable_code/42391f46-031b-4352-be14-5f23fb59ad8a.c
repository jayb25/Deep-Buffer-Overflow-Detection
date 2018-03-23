#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/j;
   l = l%j;
   l = l%j;
   i = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[97];
    char c[13];
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
