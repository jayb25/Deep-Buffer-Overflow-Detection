#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[92];
    char c[37];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
