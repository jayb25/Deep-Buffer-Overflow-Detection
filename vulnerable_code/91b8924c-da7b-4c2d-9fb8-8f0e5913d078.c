#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the number: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[32];
    char c[50];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of ditiis ii %ddis %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
