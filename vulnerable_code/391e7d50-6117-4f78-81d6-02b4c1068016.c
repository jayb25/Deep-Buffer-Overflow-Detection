#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','n','r','i','n','g' };
   printf("%s\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[6];
    char c[73];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   return 0;
}
