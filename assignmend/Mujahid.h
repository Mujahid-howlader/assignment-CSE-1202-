void maximum(int arr[], int n);
void minimum(int arr[], int n);
void odd_number(int arr[], int n);
void even_number(int arr[], int n);
void prime_number(int arr[], int n);
void digit_sum(int arr[], int n);
void gcd(int arr[], int n);
void lcm(int arr[], int n);
int reverse_number(int a);
void decimalToBinary(int a);
void decimalToOctal(int a);
void decimalToHexadecimal(int a);
void plaindrome(int a);
void binaryToDecimal(long long b);
void factorial(int num);
void power(int base, int exp);


void maximum(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
}
void minimum(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum element is: %d\n", min);
}
void odd_number(int arr[], int n){
    printf("Odd number of the elements is: ");
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void even_number(int arr[], int n){
    printf("Even number of the elements is: ");
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void prime_number(int arr[], int n){
    printf("Prime number of the elements is: ");
    for(int i = 0; i < n; i++){
        int num = arr[i];
        if(num <= 1){
            continue;
        }
        else if(num == 2){
            printf("%d ", num);
            continue;
        }
        int is_prime = 1;
        for(int j = 2; j <= num/2; j++){
            if(num % j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            printf("%d ", num);
        }
    }
    printf("\n");
}
void digit_sum(int arr[], int n){
    printf("Digit_sum of the elements: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        if(i < n-1){
            printf("+ ");
        }
        else if(i == n-1){
            printf("= ");
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
}
void gcd(int arr[], int n){
    int result = arr[0];
    for(int i = 1; i < n; i++){
        int num2 = arr[i];
        while(num2 != 0){
            int remainder = result % num2;
            result = num2;
            num2 = remainder;
        }
        if(result == 1){
            break;
        }
    }
    printf("GCD of the array elements: %d\n", result);
}
void lcm(int arr[], int n){
    long long result = arr[0];
    for(int i = 1; i < n; i++){
        long long num1 = result;
        long long num2 = arr[i];
        while(num2 != 0){
            long long remainder = num1 % num2;
            num1 = num2;
            num2 = remainder;
        }
        long long gcd = num1;
        result = (result / gcd) * arr[i];
    }
    printf("LCM of the array elements: %lld\n", result);
}
int reverse_number(int a){
    int reverse = 0, remainder;
    while(a != 0){
        remainder = a % 10;
        reverse = (reverse * 10) + remainder;
        a = a/10;
    }
    printf("The reverse number is: %d\n", reverse);
}
void decimalToBinary(int a){
    if(a == 0){
        printf("Binary: 0\n");
        return;
    }
    printf("Binary number: ");
    int binaryNum[32];
    int i=0;
    while(a > 0){
        binaryNum[i] = a % 2;
        a = a / 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}
void decimalToOctal(int a){
    if(a == 0){
        printf("Octal number: 0\n");
        return;
    }
    printf("Octal number: ");
    int octal[32];
    int i = 0;
    while(a > 0){
        octal[i] = a % 8;
        a = a / 8;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d", octal[j]);
    }
    printf("\n");
}
void decimalToHexadecimal(int a){
    if(a == 0){
        printf("Hexadecimal number: 0\n");
        return;
    }
    printf("Hexadecimal number: ");
    char hexa[100];
    int i = 0;
    while(a > 0){
        int remainder;
        remainder = a % 16;
        if(remainder < 10){
            hexa[i] = remainder + 48;
        }
        else{
            hexa[i] = remainder + 55;
        }
        i++;
        a = a / 16;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%c", hexa[j]);
    }
    printf("\n");
}
void plaindrome(int a){
    int original_number = a;
    int reverse = 0, remainder;
    if(a < 0){
        printf("%d is a NOT plaindrome number.\n", original_number);
        return;
    }
    while(a != 0){
        remainder = a % 10;
        reverse = (reverse * 10) + remainder;
        a = a/10;
    }
    if(reverse == original_number){
        printf("%d is a plaindrome number.\n", original_number);
    }
    else{
        printf("%d is a NOT plaindrome number.\n", original_number);
    }
}
void binaryToDecimal(long long b){
    int decimal_num = 0;
    int base = 1;
    while(b > 0){
        int last_digit = b % 10;
        decimal_num += (last_digit * base);
        base *= 2;
        b /= 10;
    }
    printf("The decimal number: %d\n", decimal_num);
}
void factorial(int num){
    if(num < 0 || num > 20){
        printf("EROR: Please enter positive number lower then 20. \n");
        return;
    }
    long long fact = 1;
    for(int i = 1; i < num; i++){
        fact *= i;
    }
    printf("Factorial: %lld\n", fact);
}
void power(int base, int exp){
    long long result = 1;
    for(int i = 1; i <= exp; i++){
        result *= base;
    }
    printf("%d to the powe %d is: %lld\n", base, exp, result);
}