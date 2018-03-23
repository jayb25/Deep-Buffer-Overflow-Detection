#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 531;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[43];
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
