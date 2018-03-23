#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 54;
   l = 66;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = i%j;
   j = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[61];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
