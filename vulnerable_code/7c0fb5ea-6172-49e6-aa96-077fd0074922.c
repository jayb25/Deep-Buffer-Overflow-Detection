#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 33;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[50];
    int c[92];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbbiity");
   printf("%f\n",l);
   return 0;
}
