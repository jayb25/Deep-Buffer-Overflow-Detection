#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 644;
   k = i%j;
   l = i%j;
   l = l-j;
   j = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[33];
    long c[17];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
