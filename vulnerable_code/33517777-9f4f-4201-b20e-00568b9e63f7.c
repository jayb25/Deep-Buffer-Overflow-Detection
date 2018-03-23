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
    
    /* START VULNERABILITY */
    int a;
    char b[31];
    char c[64];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
