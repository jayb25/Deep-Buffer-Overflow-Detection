#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1242;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = +j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[68];
    char c[40];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
