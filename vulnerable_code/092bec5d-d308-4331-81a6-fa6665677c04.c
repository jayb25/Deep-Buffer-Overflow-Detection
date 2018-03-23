#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=322;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   i = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[80];
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
