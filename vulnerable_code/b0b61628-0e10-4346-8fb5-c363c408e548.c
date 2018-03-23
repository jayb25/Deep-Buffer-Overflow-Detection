#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   l = l-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[84];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",i,l);
   return 0;
}
