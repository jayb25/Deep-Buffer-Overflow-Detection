#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 4;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[11];
    int c[34];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbvvtty");
   printf("%f\n",l);
   return 0;
}
