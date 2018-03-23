#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','n','r','i','n','g' };
   printf("%s\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[45];
    int c[58];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   return 0;
}
