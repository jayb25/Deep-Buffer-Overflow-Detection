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
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[95];
    int c[60];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabivvty");
   printf("%f\n",i);
   return 0;
}
