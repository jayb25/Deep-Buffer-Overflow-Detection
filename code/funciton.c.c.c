#include <stdio.h>
void my_function() ;
int main() {
   my_function();
   return 0;
}
void my_function() {
   int num1=8;
   printf("vulnerability");
   printf("%d\n",num1);
}
