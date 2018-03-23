#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 3;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[75];
    char c[87];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabbbbvy");
   printf("%f\n",k);
   return 0;
}
