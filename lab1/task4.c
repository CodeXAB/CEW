#include<stdio.h>

int decimal_to_binary(num){
  int dec = num,bin=0,rem=0,place=1;
  while(dec){
        rem=dec%2;
        dec=dec/2;
        bin=bin + (rem*place);
        place=place*10;
    }
    return bin;
}
int main(){
    printf("DECIMAL TO BINARY CONVERTER\n\n");
    int num;
    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d",&num);
    printf("BINARY EQUIVALENT: %d",decimal_to_binary(num));
    return 0;
}
