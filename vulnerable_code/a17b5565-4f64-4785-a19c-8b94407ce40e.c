#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=32;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = k%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[8];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
