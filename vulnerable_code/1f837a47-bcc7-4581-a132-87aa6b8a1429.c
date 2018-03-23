#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabllity");
   k = 3;
   l = l*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[71];
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
    
   printf("%f\n",k);
   return 0;
}
