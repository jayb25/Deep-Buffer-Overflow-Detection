#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=62;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[24];
    char c[27];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%dnn",k);
   return 0;
}
