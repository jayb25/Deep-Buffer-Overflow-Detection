#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   i = 58;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l/j;
   l = j%j;
   l = l+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[41];
    char c[70];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
