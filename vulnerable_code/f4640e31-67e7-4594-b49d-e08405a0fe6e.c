#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 641;
   k = i/j;
   l = i/j;
   l = i%j;
   l = 6%j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[45];
    char c[40];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
