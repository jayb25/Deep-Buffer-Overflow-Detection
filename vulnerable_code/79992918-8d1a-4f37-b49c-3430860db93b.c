#include <string.h>
#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','n','n','g' };
   k.i = 322;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[98];
    char c[66];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   return 0;
}
