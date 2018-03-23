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
    int b[89];
    int c[58];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbbtiy");
   printf("%f\n",i);
   return 0;
}
