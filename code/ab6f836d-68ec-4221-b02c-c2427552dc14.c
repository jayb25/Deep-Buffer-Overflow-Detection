#include <stdio.h>
struct s{
  float i;
  char* j;
};
int main() {
   struct s k;
   char l[]= { 's','t','r','n','n','g' };
   k.i = 382;
   printf("vulnerability");
   k.j = l;
   printf("%f\n",k.i);
   printf("%s\n",k.j);
   printf("vslnerabivty");
   return 0;
}
