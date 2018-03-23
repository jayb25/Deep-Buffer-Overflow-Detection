#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 52;
   l = 6/k;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[42];
    char c[93];
    a = 0;
    while (b[a] != 0) {
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
