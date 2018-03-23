#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','s','n','g' };
   k.i = 2.8;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[12];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k.j = l;
   printf("%f\\",k.i);
   printf("%s\n",k.j);
   return 0;
}
