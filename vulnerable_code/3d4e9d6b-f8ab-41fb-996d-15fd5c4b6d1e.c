#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1284;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l-j;
   l = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[86];
    char c[98];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
