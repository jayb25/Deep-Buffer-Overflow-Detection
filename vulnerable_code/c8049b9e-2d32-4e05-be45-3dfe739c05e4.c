#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=521;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[16];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
