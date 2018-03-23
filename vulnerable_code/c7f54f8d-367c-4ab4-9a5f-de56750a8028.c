#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   i = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = j%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[43];
    char c[69];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
