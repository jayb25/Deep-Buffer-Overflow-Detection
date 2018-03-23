#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = j-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[32];
    char c[50];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
