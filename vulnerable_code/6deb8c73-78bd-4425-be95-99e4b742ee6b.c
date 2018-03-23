#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   k = 53;
   l = 69;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[14];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
