#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i%j;
   l = i%j;
   j = i+j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[5];
    char c[8];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
