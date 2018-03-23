#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j-j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[70];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%dnn",k,l);
   return 0;
}
