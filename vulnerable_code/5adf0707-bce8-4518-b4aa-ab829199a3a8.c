#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 94;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k+k;
   i = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[32];
    int c[61];
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
    
   printf("%d\n",l);
   return 0;
}
