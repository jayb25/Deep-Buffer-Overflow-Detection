#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i-j;
   l = i%j;
   l = l+j;
   j = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[12];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
