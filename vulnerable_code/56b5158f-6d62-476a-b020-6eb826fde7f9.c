#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 14;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i%j;
   l = l%j;
   l = l-j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[95];
    char c[16];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
