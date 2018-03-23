#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = i-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[10];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
