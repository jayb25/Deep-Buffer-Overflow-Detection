#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=44;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l/j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[91];
    char c[60];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
