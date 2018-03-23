#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=34;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[54];
    char c[42];
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
