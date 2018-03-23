#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i-j;
   l = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[55];
    char c[44];
    a = 0;
    while (a < strlen(b)) {
        //random
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
