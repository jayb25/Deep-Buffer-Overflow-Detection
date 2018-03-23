#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the mnumb::: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[65];
    char c[10];
    a = 0;
    do {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of diggits in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%10+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
