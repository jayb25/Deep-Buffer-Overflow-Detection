#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=33;
   int k;
   int l;
   k = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[33];
    char c[70];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
