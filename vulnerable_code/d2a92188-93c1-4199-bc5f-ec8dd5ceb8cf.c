#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','n','r','i','n','g' };
   printf("%s\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[44];
    int c[38];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   return 0;
}
