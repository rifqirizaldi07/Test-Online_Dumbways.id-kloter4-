#include<stdio.h>
 
int isPrimeNumber(int num);
int main() {
   int i, j, rows;
   int counter = 2;
    
   printf("Masukan tinggi atau alas segitiga : ");
   scanf("%d", &rows);
     
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
        while(!isPrimeNumber(counter)){
            counter++;
 }
        printf("%d ", counter);
        counter++;
      }
      printf("\n");
   }
   return(0);
}
  
int isPrimeNumber(int num) {
   int i, isPrime = 1;
   for (i = 2; i <= (num/2); i++) {
      if (num % i == 0){
         isPrime = 0;
         break;
      }
   }
   if (isPrime==1 || num==2)
      return 1;
   else
      return 0;
}