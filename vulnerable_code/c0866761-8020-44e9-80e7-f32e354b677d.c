#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=62;
   int k;
   int l;
   j = 54;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = j-j;
   l = i-j;
   l = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[81];
    int c[74];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
