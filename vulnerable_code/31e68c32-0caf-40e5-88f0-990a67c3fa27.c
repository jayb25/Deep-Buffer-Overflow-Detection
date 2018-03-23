#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 94;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[95];
    int c[26];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
