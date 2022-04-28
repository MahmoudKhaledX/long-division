#include <stdio.h>


void main()
{
do{
        double DmCoff[100], NmCoff[100], ResultCoff[100];
        int DmPower, NmPower, ResulPower;
        int j, k, i,m,z;
            printf("\nPlease Enter The Degree of Nominator ");
        scanf_s("%d", &NmPower);

        for (i = 0; i < NmPower; i++)
            if (NmPower - i == 1)
            {
                printf("Please Enter X Coefficient ");
                scanf_s("%lf", &NmCoff[i]);
            }
            else
            {
                printf("Please Enter X^%d Coefficient ", NmPower - i);
                scanf_s("%lf", &NmCoff[i]);
            }
        printf("Please Enter The Value of The Constant Term ");
        scanf_s("%lf", &NmCoff[i]);
        printf("Please Enter The Degree of Denominator ");
        scanf_s("%d", &DmPower);
        for (i = 0; i < DmPower; i++)
        {
            if (DmPower - i == 1)
            {
                printf("Please Enter X Coefficient ");
                scanf_s("%lf", &DmCoff[i]);
            }
            else
            {
                printf("Please Enter X^%d Coefficient ", DmPower - i);
                scanf_s("%lf", &DmCoff[i]);
            }
        }
        printf("Please Enter The Value of The Constant Term ");
        scanf_s("%lf", &DmCoff[i]);


        double TempCoff[50];
        ResulPower = NmPower - DmPower;

        for (i = 0; i <= NmPower; i++)
        {

            if ((NmPower - i) >= DmPower)
            {
                ResultCoff[i] = NmCoff[i] / DmCoff[0];

                for (j = 0; j <= DmPower; j++)
                {
                    TempCoff[j] = ResultCoff[i] * DmCoff[j];
                    NmCoff[j + i] = NmCoff[j + i] - TempCoff[j];
                }
            }
            else {
                break;
            }
        }

        if (NmPower >= DmPower)
        {
            printf("The result is\n");
            for (i = 0; i <= ResulPower; i++)
            {
                if (ResultCoff[i] != 0)
                {
                    if (ResultCoff[i] == 1 && ResulPower - i == 1)
                    {
                        printf("X");
                    }
                    else if (ResultCoff[i] == 1 && ResulPower - i != (1&&0))
                    {
                        printf("X^%d", ResulPower - i);
                    }
                    else if (ResultCoff[i] != 1 && ResulPower - i == 1)
                    {
                        printf("%0.2lfX", ResultCoff[i]);
                    }
                    else if (ResulPower - i == 0)
                    {
                        printf("%0.2lf", ResultCoff[i]);
                    }
                    else
                    {
                        printf("%0.2lfX^%d", ResultCoff[i], ResulPower - i);
                    }

                        for(k=i+1;k<=ResulPower;k++)
                        {
                            if((ResultCoff[k]>0))
                            {
                                m=1;
                                break;
                            }
                            else if(ResultCoff[k]<0)
                            {
                                m=0;
                                break;
                            }
                            else {m=0;}
                        }
                    if (ResulPower > i > 0 &&m)
                        printf("+");
                }
            }
            int Reminder;
            for (i = 0; i <= NmPower; i++) {
                if (NmCoff[i])
                {
                    Reminder = 1;
                    break;
                }
                else
                {
                    Reminder = 0;
                }
            }
            if (Reminder) {
                printf("+(");
                for (i = 0; i <= NmPower; i++)
                {
                    if (NmCoff[i] != 0)
                    {
                        if (NmCoff[i] == 1 && NmPower - i == 1)
                        {
                            printf("X");
                        }
                        else if (NmCoff[i] == 1 && NmPower - i != (1&&0))
                        {
                            printf("X^%d", NmPower - i);
                        }
                        else if (NmCoff[i] != 1 && NmPower - i == 1)
                        {
                            printf("%0.2lfX", NmCoff[i]);
                        }
                        else if (NmPower - i == 0)
                        {
                            printf("%0.2lf", NmCoff[i]);
                        }
                        else
                        {
                            printf("%0.2lfX^%d", NmCoff[i], NmPower - i);
                        }
                        for(k=i+1;k<=NmPower;k++)
                        {
                            if(NmCoff[k]>0)
                            {
                                m=1;
                                break;
                            }
                             else if(NmCoff[k]<0)
                            {
                                m=0;
                                break;
                            }
                            else {m=0;}}
                        if (NmPower > i > 0&&m)
                            printf("+");


                    }
                }
                printf(")/(");
                for (j = 0; j <= DmPower; j++)
                {
                    if (DmCoff[j] != 0)
                    {
                        if (DmCoff[j] == 1 && DmPower - j == 1)
                        {
                            printf("X");
                        }
                        else if (DmCoff[j] == 1 && DmPower - j != (1&&0))
                        {
                            printf("X^%d", DmPower - j);
                        }
                        else if (DmCoff[j] != 1 && DmPower - j == 1)
                        {
                            printf("%0.2lfX", DmCoff[j]);
                        }
                        else if (DmPower - j == 0)
                        {
                            printf("%0.2lf", DmCoff[j]);
                        }
                        else
                        {
                            printf("%0.2lfX^%d", DmCoff[j], DmPower - j);
                        }
                        for(k=j+1;k<=DmPower;k++)
                        {
                            if(DmCoff[k]>0)
                            {
                                m=1;
                                break;
                            }
                             else if(DmCoff[k]<0)
                            {
                                m=0;
                                break;
                            }
                            else {m=0;}}
                        if (DmPower > j > 0&&m)
                            printf("+");
                    }
                }
                printf(")");

            }
        }

        else
        {
            printf("The Result is\n");
            printf("(");
            for (i = 0; i <= NmPower; i++)
            {
                if (NmCoff[i] != 0)
                {
                    if (NmCoff[i] == 1 && NmPower - i == 1)
                    {
                        printf("X");
                    }
                    else if (NmCoff[i] == 1 && NmPower - i != (0&&1))
                    {
                        printf("X^%d", NmPower - i);
                    }
                    else if (NmCoff[i] != 1 && NmPower - i == 1)
                    {
                        printf("%0.2lfX", NmCoff[i]);
                    }
                    else if (NmPower - i == 0)
                    {
                        printf("%0.2lf", NmCoff[i]);
                    }
                    else
                    {
                        printf("%0.2lfX^%d", NmCoff[i], NmPower - i);
                    }
                    for(k=i+1;k<=NmPower;k++)
                        {
                            if(NmCoff[k]>0)
                            {
                                m=1;
                                break;
                            }
                             else if(NmCoff[k]<0)
                            {
                                m=0;
                                break;
                            }
                            else {m=0;}}
                    if (NmPower > i > 0 &&m)
                        printf("+");


                }
            }
            printf(")/(");
            for (j = 0; j <= DmPower; j++)
            {
                if (DmCoff[j] != 0)
                {
                    if (DmCoff[j] == 1 && DmPower - j == 1)
                    {
                        printf("X");
                    }
                    else if (DmCoff[j] == 1 && (DmPower - j) != (0&&1))
                    {
                        printf("X^%d", DmPower - j);
                    }
                    else if (DmCoff[j] != 1 && DmPower - j == 1)
                    {
                        printf("%0.2lfX", DmCoff[j]);
                    }
                    else if (DmPower - j == 0)
                    {
                        printf("%0.2lf", DmCoff[j]);
                    }
                    else
                    {
                        printf("%0.2lfX^%d", DmCoff[j], DmPower - j);
                    }
                    for(k=j+1;k<=DmPower;k++)
                        {
                            if(DmCoff[k]>0)
                            {

                                m=1;
                                break;
                            }
                             else if(DmCoff[k]<0)
                            {
                                m=0;
                                break;
                            }
                            else {m=0;}}
                    if (DmPower > j > 0 &&m)
                        printf("+");
                }
                    }
                        printf(")");

        }
            printf("\nif you want to calculate again press y");}
            while(getche()=='y');
    }
