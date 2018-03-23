#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[41];
    long c[5];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*l/9;
   printf("vulnerabbbity");
   printf("%f\n",l);
   return 0;
}
