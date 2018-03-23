#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i+j;
   l = l-j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[20];
    char c[74];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
