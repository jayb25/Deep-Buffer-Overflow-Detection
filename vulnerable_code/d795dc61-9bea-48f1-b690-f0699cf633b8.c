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
    
    /* START VULNERABILITY */
    int a;
    char b[93];
    char c[43];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbivdy");
   printf("%f\n",i);
   return 0;
}
