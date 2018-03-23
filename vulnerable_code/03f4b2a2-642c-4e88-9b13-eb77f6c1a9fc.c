#include <string.h>
#include <stdio.h>
int main() {
   char i[]= { 's','t','r','i','n','g' };
   printf("%s\n",i);

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[96];
    int c[73];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   return 0;
}
