#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vuln=r0ability");
   k = 3;
   l = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[47];
    char c[21];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",l);
   return 0;
}
