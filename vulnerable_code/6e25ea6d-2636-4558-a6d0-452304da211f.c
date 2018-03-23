#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','t','r','s','n','g' };
   printf("%s\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[80];
    int c[91];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   return 0;
}
