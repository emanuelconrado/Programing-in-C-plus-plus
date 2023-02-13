#include <iostream>
using namespace std;

int Addition(int a, int b){
    return a+b;
}

int Subtraction(int a, int b){
    return a-b;
}

int Multiplication(int a, int b){
    return a*b;
}

int Division(int a, int b){
    return a/b;
}

int main(){
    int a, b, result;
    char operation;

    while(true){
        cout << "Choose an Operation: 'A' addition || 'S' subtraction || 'M' Multiplication || 'D' Division\n";
        cin >> operation;
        cout << "Type the first number\n";
        cin >> a;
        cout << "Type the second number\n";
        cin >> b;

        if(operation == 'A' || operation == 'a'){
        result = Addition(a,b);
        }else if(operation == 'S' || operation == 's'){
        result = Subtraction(a,b);
        }else if(operation == 'M' || operation == 'm'){
        result = Multiplication(a,b);
        }else if(operation == 'D' || operation == 'd'){
        result = Division(a,b);
        }

        cout << "Result: " << result;
        cout << "\n";
        cout << "Type '0' to finish the program or '1' to calculate again\n";
        cin >> operation;

        if(operation == '0'){
            break;
        }

    }
    
    return 0;
}