#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=04;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[5];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
