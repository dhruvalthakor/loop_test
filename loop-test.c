#include <stdio.h>

int main() {
    // Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop
    char ch='a';
    do {
        printf("%c\n",ch);
        ch += 4;
    } while (ch<='z');

    //Q.2
     int num ;
   printf("enter your number  :");
   scanf("%d",&num);
   int k=5;
   int sum;
   for(int i=1; i<num; i++){
       if(i%k==0){
           sum+=i;
       }
   }
   printf("%d\n",sum);
    return 0;
}
