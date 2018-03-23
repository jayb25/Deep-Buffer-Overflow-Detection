#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   i = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[59];
    char c[89];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
