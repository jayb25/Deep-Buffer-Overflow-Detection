#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=31;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l%j;
   l = j-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[82];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
