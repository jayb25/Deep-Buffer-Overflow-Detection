#include <string.h>
#include <stdio.h>
void my_function() ;
int main() {
   my_function();
   return 0;
}
void my_function() {
   int num1=8;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[38];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",num1);
}
