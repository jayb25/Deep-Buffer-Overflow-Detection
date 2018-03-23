#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = k%j;
   l = j/j;
   j = i%j;
   l = i+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[22];
    char c[74];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
