#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1221;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i-j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[58];
    char c[27];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
