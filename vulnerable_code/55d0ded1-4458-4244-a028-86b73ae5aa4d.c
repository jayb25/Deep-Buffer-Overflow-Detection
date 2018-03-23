#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','t','r','i','n','g' };
   printf("%s\n",i);

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[13];
    char c[49];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   return 0;
}
