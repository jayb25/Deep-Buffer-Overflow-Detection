#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=41;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = l/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[48];
    char c[24];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
