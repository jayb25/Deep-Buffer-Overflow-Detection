#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=18;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   k = i%j;
   l = i%j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[5];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
