#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=4;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = l/j;
   l = i%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[12];
    char c[89];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
