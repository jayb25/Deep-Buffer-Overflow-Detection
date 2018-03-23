#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   j = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[22];
    char c[27];
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
