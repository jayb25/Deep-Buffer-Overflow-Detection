#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/4;
   l = i/j;
   l = i/j;
   l = j/j;
   l = l-j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[73];
    long c[14];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
