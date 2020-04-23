#include<stdio.h>
int main(){
    int n;
    int c=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        printf("Number is prime");
    }else{
        printf("Number is not prime");
    }
}