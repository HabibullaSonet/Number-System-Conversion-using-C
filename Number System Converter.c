//Main Function

#include<stdio.h>
int main(){

    menu();

    return 0;
}

//Menu section

void menu(){

    int i;

    printf("Enter:\n");
    printf("1 for Decimal to Binary\n");
    printf("2 for Decimal to Octal\n");
    printf("3 for Decimal to Hexadecimal\n");
    printf("4 for Binary to Decimal\n");
    printf("5 for Binary to Octal\n");
    printf("6 for Binary to Hexadecimal\n");
    printf("7 for Octal to Decimal\n");
    printf("8 for Octal to Binary\n");
    printf("9 for Octal to Hexadecimal\n");
    printf("10 for Hexadecimal to Decimal\n");
    printf("11 for Hexadecimal to Binary\n");
    printf("12 for Hexadecimal to Octal\n");
    scanf("%d", &i);

    if(i==1){
        Decimal_Binary();
    }else if(i==2){
        Decimal_Octal();
    }else if(i==3){
        Decimal_Hexadecimal();
    }else if(i==4){
        Binary_Decimal();
    }else if(i==5){
        Binary_Octal();
    }else if(i==6){
        Binary_Hexadecimal();
    }else if(i==7){
        Octal_Decimal();
    }else if(i==8){
        Octal_Binary();
    }else if(i==9){
        Octal_Hexadecimal();
    }else if(i==10){
        Hexadecimal_Decimal();
    }else if(i==11){
        Hexadecimal_Binary();
    }else if(i==12){
        Hexadecimal_Octal();
    }

    int n;

    printf("\n1. Return to Menu: \n");
    printf("2. Exit. \n");
    scanf("%d", &n);

    if(n=1){
        menu();
    }else{
        return 0;
    }
}

//Calculation for: Decimal to Binary

void Decimal_Binary(){
    int temp, decimal, reminder, binary = 0, i = 1;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;

    while(decimal != 0){
        reminder = decimal % 2;
        decimal = decimal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("The Binary equivalent of the Decimal number %d is: %d\n\n", temp, binary);

}

//Calculation for: Decimal to Octal

void Decimal_Octal(){ //2

    int  decimal;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);

    printf("The Octal equivalent of the Decimal number %d is: %o\n\n", decimal, decimal);
}

//Calculation for: Decimal to Hexadecimal

void Decimal_Hexadecimal(){ //3

    int decimal;

    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);

    printf("The Hexadecimal equivalent of the Decimal number %d is: %x\n\n", decimal, decimal);
}

//Calculation for: Binary to Decimal

void Binary_Decimal(){ //4
    int temp, binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("The Decimal equivalent of the Binary number %d is: %d\n\n", temp, decimal);
}

//Calculation for: Binary to Octal

void Binary_Octal(){ //5

    int temp, binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("The Octal equivalent of the Binary number %d is: %o\n\n", temp, decimal);
}

//Calculation for: Binary to Hexadecimal

void Binary_Hexadecimal(){ //6

    int temp, binary, reminder, decimal = 0, i = 1;

    printf("Enter a Binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while(binary != 0){
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + (reminder * i);
        i = i * 2;
    }

    printf("The Hexadecimal equivalent of the Binary number %d is: %x\n\n", temp, decimal);

}

//Calculation for: Octal to Decimal

void Octal_Decimal(){ //7

    int octal;

    printf("Enter a Octal number: ");
    scanf("%o", &octal);

    printf("The Decimal equivalent of the Octal number %o is: %d\n\n", octal, octal);

}

//Calculation for: Octal to Binary

void Octal_Binary(){ //8


    int temp, octal, reminder, binary = 0, i = 1;

    printf("Enter a Octal number: ");
    scanf("%o", &octal);

    temp = octal;

    while(octal != 0){
        reminder = octal % 2;
        octal = octal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("The Binary equivalent of the Octal number %o is: %d\n\n", temp, binary);

}

//Calculation for: Octal to Hexadecimal

void Octal_Hexadecimal(){ //9

    int octal;

    printf("Enter a Octal number: ");
    scanf("%o", &octal);

    printf("The Hexadecimal equivalent of the Octal number %o is: %x\n\n", octal, octal);

}

//Calculation for: Hexadecimal to Decimal

void Hexadecimal_Decimal(){ //10

    int hexadecimal;

    printf("Enter a Hexadecimal number: ");
    scanf("%x", &hexadecimal);

    printf("The Decimal equivalent of the Hexadecimal number %x is: %d\n\n", hexadecimal, hexadecimal);

}

//Calculation for: Hexadecimal to Binary

void Hexadecimal_Binary(){ //11

    int temp, decimal, hexadecimal, reminder, binary = 0, i = 1;

    printf("Enter a Hexadecimal number: ");
    scanf("%x", &hexadecimal);

    temp = hexadecimal;

    while(hexadecimal != 0){
        reminder = hexadecimal % 2;
        hexadecimal = hexadecimal /2;
        binary = binary + (reminder * i);
        i = i * 10;
    }

    printf("The Binary equivalent of the Hexadecimal number %x is: %d\n\n", temp, binary);

}

//Calculation for: Hexadecimal to Octal

void Hexadecimal_Octal(){ //12

    int hexadecimal;

    printf("Enter Hexadecimal number: ");
    scanf("%x", &hexadecimal);

    printf("The Octal equivalent of the Hexadecimal number %x is: %o\n\n", hexadecimal, hexadecimal);

}

