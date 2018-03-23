#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[25];
    char c[23];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
