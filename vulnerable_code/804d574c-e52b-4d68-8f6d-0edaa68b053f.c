#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j/j;
   l = i%j;
   l = l%j;
   k = i-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[29];
    char c[96];
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
    
   printf("%d\n",l);
   return 0;
}
