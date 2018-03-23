#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j+j;
   l = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[68];
    char c[28];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
