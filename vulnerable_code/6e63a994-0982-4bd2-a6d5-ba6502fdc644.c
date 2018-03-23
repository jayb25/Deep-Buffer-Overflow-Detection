#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 4;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[89];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabibfity");
   printf("%f\n",l);
   return 0;
}
