#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=132;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[26];
    int c[25];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
