 int a[2][2], b[2][2], c[2][2], i, j;
    printf("Enter the elements of 1st matrix:");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Elements of first array:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Elements of second array:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
