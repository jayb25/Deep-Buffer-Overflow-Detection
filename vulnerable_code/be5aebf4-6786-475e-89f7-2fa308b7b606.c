#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=102;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[27];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
