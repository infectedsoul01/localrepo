void add()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    printf("the sum of given number is %d",a+b);

}
void subtraction()
{
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    printf("Subtraction is %d",a-b);
}
int main()
{
    char ch;
    printf("what do you want to perform +,-,* or /");
    if(ch == '+')
        add();
    else if(ch == '-')
        sub();

}