#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[25];
    char c[17];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
