#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[56];
    char c[94];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabbbitty");
   printf("%f\n",l);
   return 0;
}
