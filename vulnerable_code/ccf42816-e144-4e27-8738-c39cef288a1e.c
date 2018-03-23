#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 54;
   k = i/j;
   l = j/j;
   l = j%j;
   l = l+j;
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[20];
    char c[61];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
