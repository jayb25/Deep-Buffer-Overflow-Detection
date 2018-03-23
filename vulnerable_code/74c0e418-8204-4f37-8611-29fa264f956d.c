#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1244;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l%j;
   l = l-j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[15];
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
