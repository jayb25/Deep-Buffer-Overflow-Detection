#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i%j;
   l = l-j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[85];
    char c[84];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
