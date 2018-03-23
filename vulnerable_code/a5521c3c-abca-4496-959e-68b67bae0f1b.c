#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = l/j;
   l = l%j;
   l = l-j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[55];
    char c[88];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
