#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=34;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i+j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[51];
    char c[20];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
