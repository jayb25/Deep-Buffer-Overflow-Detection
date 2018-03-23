#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   i = l/j;
   l = l/j;
   l = l%j;
   l = l%j;
   j = i-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[51];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
