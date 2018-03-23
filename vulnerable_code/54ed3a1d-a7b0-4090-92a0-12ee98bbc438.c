#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=118;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = l%j;
   l = l%j;
   l = j-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[23];
    char c[86];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
