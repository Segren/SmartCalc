#include "ipn_converter.h"

// сортировка ввода
OperationType inputSort(char *input)
{
    OperationType sort;
    if (!strcmp(input, "+"))
        sort = SUM;
    else if (!strcmp(input, "#"))
        sort = UNAR_SUB;
    else if (!strcmp(input, "-"))
        sort = SUB;
    else if (!strcmp(input, "*"))
        sort = MUL;
    else if (!strcmp(input, "/"))
        sort = DIV;
    else if (!strcmp(input, "%"))
        sort = MOD;
    else if (!strcmp(input, "^"))
        sort = SQR;
    else if (!strcmp(input, "sqrt"))
        sort = SQRT;
    else if (!strcmp(input, "sin"))
        sort = SIN;
    else if (!strcmp(input, "cos"))
        sort = COS;
    else if (!strcmp(input, "asin"))
        sort = ASIN;
    else if (!strcmp(input, "acos"))
        sort = ACOS;
    else if (!strcmp(input, "tan"))
        sort = TAN;
    else if (!strcmp(input, "atan"))
        sort = ATAN;
    else if (!strcmp(input, "log"))
        sort = LOG;
    else if (!strcmp(input, "ln"))
        sort = LN;
    else if (!strcmp(input, "("))
        sort = LEFT_BRACKET;
    else if (!strcmp(input, ")"))
        sort = RIGHT_BRACKET;
    else
        sort = UNKNOWN;

    return sort;
}

// переводим ввод в токены и запихиваем в постфикс
char *tokenize(char *expression)
{
    OperatorStack operatorStack;
    initOpStack(&operatorStack);
    FunctionStack functionStack;
    initFuncStack(&functionStack);
    char *postfix = (char *)malloc(strlen(expression) * 2 + 1);

    int i = 0;
    // для хранения текущего токена
    char token[MAX_SIZE];
    int j = 0;
    while (expression[i] != '\0')
    {
        if (isDigit(expression[i]) || expression[i] == '.')
        {
            // собираем число
            while (isDigit(expression[i]) || expression[i] == '.')
            {
                token[j++] = expression[i++];
            }
            token[j] = '\0';
            addTokenToPostfixExpression(postfix, token);
            j = 0;
        }
        else if (isX(expression[i]))
        {
            token[j++] = expression[i++];
            token[j] = '\0';
            addTokenToPostfixExpression(postfix, token);
            j = 0;
        }
        else if (isAlpha(expression[i]))
        {
            // собираем функцию или переменную
            while (isAlpha(expression[i]))
            {
                token[j++] = expression[i++];
            }
            token[j] = '\0';
            pushFuncStack(&functionStack, token);
            j = 0;
        }
        else if (isUnaryMinus(expression, i))
        {
            char uMinus = '#';
            pushOpStack(&operatorStack, uMinus);
            i++;
        }
        else if (isOperator(expression[i]))
        {
            if (!isOpStackEmpty(&operatorStack))
            {
                char stackStr[2];
                stackStr[0] = peekOpStack(&operatorStack);
                stackStr[1] = '\0';
                char expressionStr[2];
                expressionStr[0] = expression[i];
                expressionStr[1] = '\0';
                if (getPrecedence(inputSort(expressionStr)) < getPrecedence(inputSort(stackStr)))
                {
                    stackStr[0] = popOpStack(&operatorStack);
                    stackStr[1] = '\0';
                    addTokenToPostfixExpression(postfix, stackStr);
                }
            }
            pushOpStack(&operatorStack, expression[i]);
            i++;
        }
        else if (isParenthesis(expression[i]))
        {
            if (expression[i] == '(')
            {
                pushOpStack(&operatorStack, expression[i]);
            }
            else if (expression[i] == ')')
            {
                while (!isOpStackEmpty(&operatorStack) && peekOpStack(&operatorStack) != '(')
                {
                    char token[2];
                    token[0] = popOpStack(&operatorStack);
                    token[1] = '\0';
                    addTokenToPostfixExpression(postfix, token);
                }
                // избавляемся от открывающей скобки
                popOpStack(&operatorStack);
                // проверяем стоит ли за скобкой функция. Если да - перевести в выходную строку
                if (!isFuncStackEmpty(&functionStack))
                {
                    addTokenToPostfixExpression(postfix, popFuncStack(&functionStack));
                }
            }
            i++;
        }
        else if (expression[i] == ' ')
        {
            i++;
        }
        else
        {
            printf("Tokenize: input unknown\n");
            i++;
        }
    }
    // извлекаем оставшиеся операторы из стека
    while (!isOpStackEmpty(&operatorStack))
    {
        char tokenlast[2];
        tokenlast[0] = popOpStack(&operatorStack);
        tokenlast[1] = '\0';
        addTokenToPostfixExpression(postfix, tokenlast);
    }
    postfix[strlen(postfix)] = '\0';
    clearFuncStack(&functionStack);
    clearOpStack(&operatorStack);
    return postfix;
}

int getPrecedence(OperationType op)
{
    int precedence = -1;
    switch (op)
    {
    case LEFT_BRACKET:
        precedence = 0;
    case SUM:
    case SUB:
        precedence = 1;
        break;
    case MUL:
    case DIV:
    case MOD:
        precedence = 2;
        break;
    case SQR:
        precedence = 3;
        break;
    case SQRT:
    case SIN:
    case COS:
    case TAN:
    case ASIN:
    case ACOS:
    case ATAN:
    case LOG:
    case LN:
        precedence = 4;
        break;
    case UNAR_SUB:
        precedence = 5;
        break;
    case RIGHT_BRACKET:
        precedence = 6;
        break;
    case UNKNOWN:
        printf("getPrecedence error: unknown value");
        break;
    }
    return precedence;
}

bool isUnaryMinus(const char *expression, int index)
{
    bool flag = false;
    // если унарный минус в начале выражения
    if (expression[index] == '-' && index == 0)
        flag = true;
    // если унарный минус после открывающей скобки или оператора
    if (expression[index] == '-' && (isOperator(expression[index - 1]) || expression[index - 1] == '('))
        flag = true;
    return flag;
}

bool isOperator(const char input)
{
    return input == '+' || input == '-' || input == '*' || input == '/' || input == '^' || input == '%';
}

bool isX(const char input)
{
    return input == 'x' || input == 'X';
}

bool isParenthesis(const char input)
{
    return input == '(' || input == ')';
}

bool isAlpha(const char input)
{
    return (input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z');
}

bool isDigit(const char input)
{
    return (input >= '0' && input <= '9');
}

int hasBalancedParenthesis(char *str)
{
    int flag = 0;
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '(')
            count++;
        else if (str[i] == ')')
            count--;
    }
    if (count > 0)
        flag = 1;
    else if (count == 0)
        flag = 0;
    else
        flag = -1;
    return flag;
}

// добавляем токен к выходному ОПН выражению
void addTokenToPostfixExpression(char *postfix, const char *token)
{
    //+1 для пробела
    if (strlen(postfix) + strlen(token) + 1 < MAX_SIZE)
    {
        strcat(postfix, token);
        strcat(postfix, " ");
    }
    else
        printf("addTokenToPostfixExpression error: too long");
}

bool calculatePostfix(char *postfix, double *result, double x)
{
    bool flag = true; // нет ошибки
    CalcStack stack;
    initCalcStack(&stack);

    char *token = strtok(postfix, " ");
    while (token != NULL && flag == true)
    {
        if (isDigit(token[0]))
            // обработка цифр
            pushCalcStack(&stack, atof(token));
        else if (isX(token[0]))
        {
            // обработка переменной
            pushCalcStack(&stack, x);
        }
        else if (token[0] == '#')
        {
            // обработка унарного минуса
            double num = popCalcStack(&stack);
            pushCalcStack(&stack, -num);
        }
        else
        {
            if (strcmp(token, "sin") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                double radians = num * M_PI / 180.0;
                pushCalcStack(&stack, sin(radians));
            }
            else if (strcmp(token, "cos") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                pushCalcStack(&stack, cos(num));
            }
            else if (strcmp(token, "sqrt") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                if (num >= 0)
                    pushCalcStack(&stack, sqrt(num));
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (strcmp(token, "tan") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                pushCalcStack(&stack, tan(num));
            }
            else if (strcmp(token, "asin") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                if (num >= -1 && num <= 1)
                    pushCalcStack(&stack, asin(num));
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (strcmp(token, "acos") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                if (num >= -1 && num <= 1)
                    pushCalcStack(&stack, acos(num));
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (strcmp(token, "atan") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                pushCalcStack(&stack, atan(num));
            }
            else if (strcmp(token, "log") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                if (num > 0)
                    pushCalcStack(&stack, log10(num));
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (strcmp(token, "ln") == 0)
            {
                // обработка функций
                double num = popCalcStack(&stack);
                if (num > 0)
                    pushCalcStack(&stack, log(num));
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                // обработка операторов
                double second = popCalcStack(&stack);
                double first = popCalcStack(&stack);
                switch (token[0])
                {
                case '+':
                    pushCalcStack(&stack, first + second);
                    break;
                case '-':
                    pushCalcStack(&stack, first - second);
                    break;
                case '*':
                    pushCalcStack(&stack, first * second);
                    break;
                case '/':
                    if (second != 0)
                        pushCalcStack(&stack, first / second);
                    else
                        flag = false;
                    break;
                case '%':
                    if (second != 0)
                        pushCalcStack(&stack, fmod(first, second));
                    else
                        flag = false;
                    break;
                case '^':
                    pushCalcStack(&stack, pow(first, second));
                    break;
                }
            }
        }
        token = strtok(NULL, " ");
    }
    if (flag == true)
        *result = popCalcStack(&stack);

    clearCalcStack(&stack);
    return flag;
}

// int main(void)
// {
//     char *input = "sin(1)";
//     if (hasBalancedParenthesis(input) == 0)
//     {
//         char *postfix = tokenize(input);
//         double result;
//         double x = 0;
//         if (calculatePostfix(postfix, &result, x))
//         {
//             printf("%lf", result);
//         }
//         else
//             printf("error\n");
//         free(postfix);
//     }
//     return 0;
// }