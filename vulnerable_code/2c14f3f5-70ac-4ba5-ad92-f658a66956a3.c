#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/2;
   l = i%j;
   l = i+j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[51];
    char c[73];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
