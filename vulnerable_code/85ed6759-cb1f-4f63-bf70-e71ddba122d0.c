#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','t','r','s','n','g' };
   printf("%s\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[10];
    long c[60];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   return 0;
}
