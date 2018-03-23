#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=142;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i-j;
   l = j-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[80];
    int c[60];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
