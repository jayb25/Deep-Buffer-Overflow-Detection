#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[40];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
