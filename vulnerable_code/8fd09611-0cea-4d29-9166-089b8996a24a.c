#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=118;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = l%j;
   l = l%j;
   l = j-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[50];
    long c[59];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
