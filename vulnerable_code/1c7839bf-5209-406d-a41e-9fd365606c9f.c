#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=142;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k-j;
   l = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[16];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
