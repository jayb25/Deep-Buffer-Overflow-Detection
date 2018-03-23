#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = l-l;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[96];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
