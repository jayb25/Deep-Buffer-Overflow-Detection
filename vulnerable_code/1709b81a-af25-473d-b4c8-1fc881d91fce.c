#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=52;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = j-j;
   j = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[33];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
