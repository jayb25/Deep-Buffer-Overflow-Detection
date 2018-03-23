#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   k = 633;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = 6-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[25];
    char c[45];
    a = 0;
    do {
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
