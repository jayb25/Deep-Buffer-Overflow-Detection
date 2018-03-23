#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12224;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = j+j;
   l = i+j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[56];
    char c[83];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
