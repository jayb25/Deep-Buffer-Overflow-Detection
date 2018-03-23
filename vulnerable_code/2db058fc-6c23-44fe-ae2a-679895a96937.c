#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[51];
    char c[9];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
