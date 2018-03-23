#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=02;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = l/j;
   l = i-j;
   l = l/j;
   l = i%j;
   l = l-j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[16];
    char c[95];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
