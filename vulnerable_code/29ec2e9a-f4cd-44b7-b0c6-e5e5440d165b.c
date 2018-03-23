#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[78];
    char c[6];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
