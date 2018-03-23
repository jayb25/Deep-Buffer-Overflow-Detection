#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=52;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = i/j;
   l = l+j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[31];
    char c[25];
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
