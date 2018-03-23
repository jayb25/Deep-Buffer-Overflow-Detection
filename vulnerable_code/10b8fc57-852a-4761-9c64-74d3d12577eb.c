#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[43];
    char c[54];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 5;
   l = i*j*k/9;
   printf("vulnerabivyty");
   printf("%f\n",l);
   return 0;
}
