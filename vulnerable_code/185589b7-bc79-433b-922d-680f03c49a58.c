#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=141;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = j/j;
   l = i/j;
   k = l-j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[84];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
