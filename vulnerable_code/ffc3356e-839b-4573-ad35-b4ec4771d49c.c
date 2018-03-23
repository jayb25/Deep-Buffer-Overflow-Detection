#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = i+j;
   k = k-j*i;
   k = i/j;
   l = i%j;
   l = l-j;
   l = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[48];
    char c[51];
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
    //random
    
   printf("%d\n",l);
   return 0;
}
