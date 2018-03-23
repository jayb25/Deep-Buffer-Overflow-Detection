#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 61;
   k = i%j;
   l = i/j;
   l = k%j;
   l = l-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[17];
    char c[88];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
