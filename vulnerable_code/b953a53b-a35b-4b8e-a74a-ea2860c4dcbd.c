#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=4224;
   int k;
   int l;
   j = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i%j;
   l = i%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[79];
    char c[86];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
