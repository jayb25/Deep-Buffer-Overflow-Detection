#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i-j;
   l = i%j;
   l = j-j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[39];
    char c[13];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
