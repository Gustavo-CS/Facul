int main()
{
    int num;
    scanf("%d",&num);

    for (int i = 1; i <= num; i ++)
    {
        if (i%2==1){
            continue;
        }
        printf("%d \n", i);
    }
}