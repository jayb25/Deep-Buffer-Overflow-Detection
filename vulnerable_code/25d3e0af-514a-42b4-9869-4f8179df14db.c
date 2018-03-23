#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   l = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[60];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*l/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
