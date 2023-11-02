int Numeric(const char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}

int multiply(int num1, int num2)
{
return (num1 * num2);
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!Numeric(argv[1]) || !Numeric(argv[2]))
{
printf("Error\n");\
return(98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

int  result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}
