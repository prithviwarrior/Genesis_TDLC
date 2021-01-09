#include "calc.h"

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int multi(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int dollar(int a)
{
    return a*65;
}

int rupees(int a)
{
	return a/65;
}

int square(int a)
{
	return a*a;
}
int Dec(char hex[])
{
    long long decimal=0,base=1;
    int i=0,value,length;
    length=strlen(hex);
    for(i=length-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            decimal+=(hex[i]-48)*base;
            base*=16;

        }
        else if(hex[i]>='A'&& hex[i]<='F')
        {
            decimal+=(hex[i]-55)*base;
            base*=16;
        }
        else if(hex[i]>='a'&& hex[i]<='f')
        {
            decimal+=(hex[i]-87)*base;
            base*=16;
        }
    }
        return decimal;
    
}


int cube(int a)
{
	return a*a*a;
}

int sqroot(int a)
{
	return sqrt((a));
}
/*
int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two values: ");
    scanf("%lf %lf", &first, &second);

    switch(operator) 
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
			break;
		case '/':
			printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
			break;
			// operator doesn't match any case constant
		default:
			printf("Error! operator is not correct");
    }
	
	

    return 0;
}
*/
