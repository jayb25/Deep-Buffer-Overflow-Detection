#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1224;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i%j;
   l = l%j;
   l = j%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[21];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
