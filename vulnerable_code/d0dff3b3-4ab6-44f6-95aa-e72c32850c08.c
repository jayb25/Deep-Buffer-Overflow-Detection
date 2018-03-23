#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=132;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = i%j;
   l = j-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
