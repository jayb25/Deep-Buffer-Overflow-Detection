#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=143;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l/j;
   l = k%j;
   l = i%j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[95];
    char c[83];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
