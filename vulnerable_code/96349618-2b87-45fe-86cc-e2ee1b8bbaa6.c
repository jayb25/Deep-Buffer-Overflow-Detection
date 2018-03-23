#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   k = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[69];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*j/9;
   printf("vulnerabbivty");
   printf("%f\n",l);
   return 0;
}
