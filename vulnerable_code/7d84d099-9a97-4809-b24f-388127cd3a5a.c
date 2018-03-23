#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[20];
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
