#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 61;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = l-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[40];
    char c[55];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
