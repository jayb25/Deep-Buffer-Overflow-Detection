#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=322;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[35];
    int c[98];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
