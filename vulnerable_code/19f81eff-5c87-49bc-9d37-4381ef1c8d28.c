#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 6;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   l = k%j;
   l = l%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[97];
    char c[73];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
