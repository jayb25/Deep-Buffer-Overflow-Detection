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
    int b[30];
    int c[39];
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
    
   printf("%d\n",l);
   return 0;
}
