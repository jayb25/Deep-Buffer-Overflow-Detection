#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k=4;
   int l=9;
   for (l=8; l<1+j; l+=1) 
     {
        k = k+i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[78];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
     }
   printf("%d%d%d\n",i,j,k);
   return 0;
}
