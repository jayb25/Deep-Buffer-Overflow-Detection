#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=102;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[41];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
