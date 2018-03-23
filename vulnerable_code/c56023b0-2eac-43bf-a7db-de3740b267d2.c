#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   j = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = l+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[89];
    char c[48];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
