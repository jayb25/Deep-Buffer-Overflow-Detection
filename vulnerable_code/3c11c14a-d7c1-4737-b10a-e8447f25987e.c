#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabillty");
   k = 3;
   l = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[19];
    int c[35];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",i);
   return 0;
}
