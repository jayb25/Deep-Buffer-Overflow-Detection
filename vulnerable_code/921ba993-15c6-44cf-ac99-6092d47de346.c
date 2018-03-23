#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   j = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = i/j;
   l = l-j;
   l = l%j;
   l = i%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[39];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
