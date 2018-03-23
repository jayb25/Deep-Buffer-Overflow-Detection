#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[16];
    long c[30];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
