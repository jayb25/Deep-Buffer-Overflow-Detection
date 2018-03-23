#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   j = 538;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[58];
    char c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
