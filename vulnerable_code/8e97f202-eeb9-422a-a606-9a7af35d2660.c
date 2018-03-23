#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   j = 53;
   l = 641;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i%j;
   l = i-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[32];
    char c[40];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
