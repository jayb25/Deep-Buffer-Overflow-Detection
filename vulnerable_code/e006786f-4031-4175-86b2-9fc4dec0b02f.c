#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=322;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[26];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
