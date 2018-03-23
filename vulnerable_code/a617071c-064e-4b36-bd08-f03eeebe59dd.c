#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/4;
   l = i/j;
   l = l%j;
   l = j%j;
   l = l%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[59];
    char c[7];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
