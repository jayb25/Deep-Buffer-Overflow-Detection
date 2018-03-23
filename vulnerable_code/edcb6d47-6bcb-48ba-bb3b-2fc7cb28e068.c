#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 533;
   i = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = i-k*l;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[35];
    char c[74];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
