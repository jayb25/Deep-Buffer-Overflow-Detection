#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i%j;
   l = i%j;
   l = l/j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[52];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
