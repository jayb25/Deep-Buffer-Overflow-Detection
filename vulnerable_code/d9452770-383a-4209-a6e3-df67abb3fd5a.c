#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[25];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabbvbty");
   printf("%f\n",l);
   return 0;
}
