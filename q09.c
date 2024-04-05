#include <stdio.h> 

int main(){
    
    int left, right, result;
    char oper;
    
    printf("Operator? Left Operand? Right Operand?\n");
    scanf(" %c %d %d", &oper, &left, &right);
    
    if (left == 0 || right == 0){
        printf("Unable to compute divide by zero!");
    }
    
    else if (oper == '+')
    {
        result = left + right;
        printf("Computing: %d %c %d\n", left, oper, right);
        printf("Result: %d", result);
    }
    
    else if (oper == '-'){
        result = left - right;
        printf("Computing: %d %c %d\n", left, oper, right);
        printf("Result: %d", result);
    }
    
    else if (oper == '*'){
        result = left * right;
        printf("Computing: %d %c %d\n", left, oper, right);
        printf("Result: %d", result);
        
    }
    
    else if (oper == '/'){
        result = left / right;
        printf("Computing: %d %c %d\n", left, oper, right);
        printf("Result: %d", result);
    }
}

/*
Operator? Left Operand? Right Operand?
Computing: 4 + 7
Result: 11
*/
