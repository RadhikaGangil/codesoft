#include <iostream>
int main()
{
    // form here we start code
    char op;
    int num1, num2, res;
    std::cout << "enter the value of num1\n";
    std::cin >> num1;
    std::cout << "enter the valid operation\n +  ,-,*,/,\n";
    std::cin >> op;
    std::cout << "enter the value of num2\n";
    std::cin >> num2;
    switch (op)
    {

    case '+':
        res = num1 + num2;
        std::cout << "addition is\n"
                  << res;
        break;

    case '-':
        res = num1 - num2;
        std::cout << "substraction is is\n"
                  << res;
        break;
    case '*':
        res = num1 * num2;
        std::cout << "multiplication  is is\n"
                  << res;
        break;
    case '/':
        res = num1 / num2;
        std::cout << "divison is is\n"
                  << res;
        break;
    default: //   other than +, -, * or /, error message is shown
        std::cout << "invalid operator";
        break;
    }
    return 0;
}