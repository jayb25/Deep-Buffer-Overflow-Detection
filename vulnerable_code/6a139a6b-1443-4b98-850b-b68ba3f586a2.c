#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','t','r','s','n','g' };
   printf("%s\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[55];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   return 0;
}
