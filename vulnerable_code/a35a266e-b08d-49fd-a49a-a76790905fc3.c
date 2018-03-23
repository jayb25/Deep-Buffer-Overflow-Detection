#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = l;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[77];
    char c[41];
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
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
