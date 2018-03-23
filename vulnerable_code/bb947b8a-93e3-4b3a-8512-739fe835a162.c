#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[99];
    char c[32];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabivvty");
   printf("%f\n",k);
   return 0;
}
