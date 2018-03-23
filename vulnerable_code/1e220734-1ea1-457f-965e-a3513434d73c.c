#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=124;
   int k;
   int l;
   k = 53;
   i = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[78];
    char c[20];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,k);
   return 0;
}
