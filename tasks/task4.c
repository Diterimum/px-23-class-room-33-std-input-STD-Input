#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc!=4){
        printf("Error: Please provide an operation and two numbers.\n");
        return 1;
    }
    char *operation=argv[1];
    int num1=atoi(argv[2]);
    int num2=atoi(argv[3]);

    if (strcmp(operation, "add")==0){
        printf("Result: %d\n", num1+num2);
    }else if(strcmp(operation, "subtract")==0){
        printf("Result: %d\n", num1-num2);
    }else if(strcmp(operation, "multiply")==0){
        printf("Result: %d\n", num1*num2);
    }else if(strcmp(operation, "divide")==0){
        if(num2==0){
            printf("Error: Division by zero is not allowed.\n");
        }else{
            printf("Result: %d\n", num1 / num2);
        }
    }else{
        printf("Error: Unsupported operation. Use add, subtract, multiply, or divide.\n");
    }
    return 0;
}