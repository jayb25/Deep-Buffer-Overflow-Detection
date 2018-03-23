#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=48;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   k = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[96];
    int c[5];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
