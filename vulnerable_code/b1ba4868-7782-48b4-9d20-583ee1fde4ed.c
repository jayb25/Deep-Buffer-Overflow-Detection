#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = i;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[46];
    char c[10];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbiity");
   printf("%f\n",l);
   return 0;
}
