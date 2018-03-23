#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = k+j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[85];
    char c[10];
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
