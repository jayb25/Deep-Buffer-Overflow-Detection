#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=12;
   int k;
   int l;
   j = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[81];
    char c[9];
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
