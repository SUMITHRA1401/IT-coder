 #include <stdio.h>
    void main()
    {
 
        int i, j, a, b, value[30];
        printf("Enter the value of N \n");
        scanf("%d", &b);
 
        printf("Enter the numbers \n");
        for (i = 0; i < b; ++i)
            scanf("%d", &value[i]);
 
        for (i = 0; i < b; ++i) 
        {
 
            for (j = i + 1; j < b; ++j)
            {
 
                if (value[i] > value[j]) 
                {
 
                    a =  number[i];
                    value[i] = value[j];
                    value[j] = a;
                    }
                    }
            }
 
        printf("The numbers arranged in sorted order \n");
        for (i = 0; i < b; ++i)
            printf("%d \n", value[i]);
 
    }
