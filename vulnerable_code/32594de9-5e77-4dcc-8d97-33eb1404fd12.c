#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[70];
    char c[16];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
