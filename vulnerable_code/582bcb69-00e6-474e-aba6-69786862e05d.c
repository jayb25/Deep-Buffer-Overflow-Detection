#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=132;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   l = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[95];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
