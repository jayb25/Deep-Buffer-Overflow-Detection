#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 553;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   i = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[23];
    char c[80];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
