#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=31;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[48];
    char c[94];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   ;
   return 0;
}
