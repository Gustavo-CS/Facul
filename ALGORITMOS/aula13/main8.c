int main()
{
    int num;
    scanf("%d",&num);

    for (int i = 1; i <= num; i += 2)
    {
        if (i%2==0){
            continue;
        }
        printf("%d \n", i);
    }
}