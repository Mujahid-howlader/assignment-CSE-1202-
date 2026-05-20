#include<stdio.h>
#include "Mujahid.h"
int main(){
    int n;
    printf("The number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }
    maximum(arr, n);
    minimum(arr, n);
    odd_number(arr, n);
    even_number(arr, n);
    prime_number(arr, n);
    digit_sum(arr, n);
    gcd(arr, n);
    lcm(arr, n);
    int a;
    printf("Enter the decimal number: ");
    scanf("%d", &a);
    reverse_number(a);
    decimalToBinary(a);
    decimalToOctal(a);
    decimalToHexadecimal(a);
    plaindrome(a);
    long long b;
    printf("Enter binary number: ");
    scanf("%lld", b);
    binaryToDecimal(b);
    int num;
    printf("Enter the number(less then 20): ");
    scanf("%d", &num);
    factorial(num);
    int base, exp;
    printf("Enter the base and exponent number: ");
    scanf("%d %d", &base, &exp);
    power(base, exp);
    return 0;
}