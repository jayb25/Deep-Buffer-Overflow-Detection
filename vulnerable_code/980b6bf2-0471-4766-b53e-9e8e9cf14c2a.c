#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=22;
   int k;
   int l;
   k = 53;
   l = 62;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[6];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
