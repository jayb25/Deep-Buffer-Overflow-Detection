#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[19];
    char c[6];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
