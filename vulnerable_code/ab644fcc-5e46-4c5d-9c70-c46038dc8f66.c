#include <string.h>
#include <stdio.h>
int main() {
   float i=44;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   j = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[13];
    char c[63];
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
