#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=12;
   int k;
   int l;
   i = 33;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[14];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
