#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=121;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = 9%j;
   l = i%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[95];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
