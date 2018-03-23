#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=123;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = j%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[60];
    char c[14];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
