#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=31;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l+j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[19];
    char c[17];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
