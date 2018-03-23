#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','n','r','i','n','g' };
   printf("%s\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[49];
    char c[35];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   return 0;
}
