#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=110;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i-j;
   l = i-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[66];
    char c[83];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
