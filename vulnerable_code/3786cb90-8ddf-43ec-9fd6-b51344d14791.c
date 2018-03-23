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
    char b[18];
    char c[40];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabiibty");
   printf("%f\n",k);
   return 0;
}
