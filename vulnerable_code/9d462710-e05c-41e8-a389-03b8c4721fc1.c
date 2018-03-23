#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 3;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[62];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabivitty");
   printf("%f\n",l);
   return 0;
}
