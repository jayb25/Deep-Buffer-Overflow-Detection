#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=22;
   int k;
   int l;
   k = 53;
   k = 66;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[27];
    char c[31];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
