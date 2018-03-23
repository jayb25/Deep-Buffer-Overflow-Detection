#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i+j;
   k = k-i*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[20];
    char c[49];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
