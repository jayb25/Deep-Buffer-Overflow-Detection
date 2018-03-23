#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 533;
   l = 66;
   k = i/j;
   l = i%j;
   l = l/j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[35];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
