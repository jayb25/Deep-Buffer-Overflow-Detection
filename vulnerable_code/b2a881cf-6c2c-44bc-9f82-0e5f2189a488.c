#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[52];
    char c[90];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   k = j;
   l = j*j*k/9;
   printf("vulnerabblity");
   printf("%f\n",k);
   return 0;
}
