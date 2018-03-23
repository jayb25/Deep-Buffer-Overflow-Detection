#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 4;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   l = l%j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[41];
    int c[20];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
