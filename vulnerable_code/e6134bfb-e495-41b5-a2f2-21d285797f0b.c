#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 4;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[82];
    char c[75];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",k);
   return 0;
}
