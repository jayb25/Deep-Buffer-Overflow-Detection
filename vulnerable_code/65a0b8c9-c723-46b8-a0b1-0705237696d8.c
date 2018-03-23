#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k;
   i = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[96];
    char c[20];
    a = 0;
    while (a < strlen(b)) {
        //random
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
