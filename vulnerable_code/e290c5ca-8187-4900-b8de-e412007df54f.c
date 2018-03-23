#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter th number: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[17];
    char c[14];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of diggits in %d is %d\n",num,result);
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
