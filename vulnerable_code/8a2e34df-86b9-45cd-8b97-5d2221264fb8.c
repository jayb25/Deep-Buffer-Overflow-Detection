#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1244;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i+j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[18];
    char c[30];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
