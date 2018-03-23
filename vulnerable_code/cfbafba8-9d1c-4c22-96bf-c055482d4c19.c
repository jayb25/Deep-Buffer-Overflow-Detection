#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[73];
    int c[46];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
     }
   printf("%d\n",k);
   return 0;
}
