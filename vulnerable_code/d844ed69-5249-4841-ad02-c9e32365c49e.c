#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 764;
   k = i/j;
   l = i/j;
   l = j/j;
   l = j%j;
   l = i+j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[30];
    char c[27];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
