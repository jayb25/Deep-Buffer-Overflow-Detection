#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[72];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
