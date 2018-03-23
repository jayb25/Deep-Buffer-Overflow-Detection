#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[88];
    long c[50];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
