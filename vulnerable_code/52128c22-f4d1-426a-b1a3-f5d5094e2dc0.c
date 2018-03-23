#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12.;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = j-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[72];
    char c[28];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
