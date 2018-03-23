#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[61];
    int c[43];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
