#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k+j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[37];
    char c[58];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
