#include "RPN.hpp"

int valid_operator(std::string str)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            count++;
    }
    return count;
}

void execution(std::string str)
{
    std::stack<int> stack;
    int val1;
    int val2;
    if (str == "Error" || !valid_operator(str))
    {
        std::cout << "Error" << std::endl;
        return;
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            continue;
        else if (str[i] == '=' || str[i] == '(' || str[i] == ')' || str[i] == '^' || str[i] == '%' || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            std::cout << "Error" << std::endl;
            return;
        }
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if (stack.size() < 2)
            {
                std::cout << "Error" << std::endl;
                return;
            }
            val1 = stack.top();
            stack.pop();
            val2 = stack.top();
            stack.pop();
            switch (str[i])
            {
            case '+':
                stack.push(val2 + val1);
                break;
            case '-':
                stack.push(val2 - val1);
                break;
            case '*':
                stack.push(val2 * val1);
                break;
            case '/':
                if (val2 == 0)
                {
                    std::cout << "Error" << std::endl;
                    return;
                }
                stack.push(val2 / val1);
                break;
            }
        }
        else
        {
            stack.push(str[i] - '0');
        }
    }
    std::cout << stack.top() << std::endl;
}