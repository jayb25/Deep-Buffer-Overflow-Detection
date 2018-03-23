#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 5;
   l = 44;
   k = i/j;
   l = i/j;
   l = i%j;
   l = j%j;
   l = l-j;
   k = i-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[21];
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
