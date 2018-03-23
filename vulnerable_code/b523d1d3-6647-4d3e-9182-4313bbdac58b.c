#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=322;
   int k;
   int l;
   j = 533;
   l = 64;
   k = l+j;
   l = 6-j;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[70];
    int c[45];
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
    //random
    
   printf("%d\n",l);
   return 0;
}
