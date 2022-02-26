#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void exchangesort();
void bubbleSort();
int main();

void bubbleSort()
{
    system ("cls");
    int i,j,data[]={23,65,30,8,33,24,76,7};
    int n=sizeof(data)/sizeof(data[0]);
    int tempo;
    printf("\n====== BUBBLE SORT =======\n");
    printf("\nData awal : 23 65 30 8 33 24 76 7\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
            {
            if (data[j] > data[j+1])
            {
                tempo = data[j];
                data[j] = data[j+1];
                data[j+1] = tempo;
            }
        }
    }
    printf("\nHasil setelah diurutkan (ascending) :\n");
    for(int i=0;i<n;++i)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    getch();
    main();
}
void exchangeSort()
{
    system ("cls");
    int i,j,data[]={23,65,30,8,33,24,76,7};
    int n=sizeof(data)/sizeof(data[0]);
    int tempo;
    printf("\n====== EXCHANGE SORT =======\n");
    printf("\nData awal : 23 65 30 8 33 24 76 7\n");
    for (i=0;i<n-1;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(data[i]>data[j])
            {
                tempo = data[i];
                data[i] = data[j];
                data[j] = tempo;
            }
        }
    }
    printf("\nHasil setelah diurutkan (ascending) :\n");
    for(int i=0;i<n;++i)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    getch();
    main();
}
int main()
{
    system ("cls");
    int pilihanmu;
    printf("====== SORTING =======\n");
    printf("MENU\t:\n");
    printf("1. Exchange Sort\n");
    printf("2. Bubble Sort\n");
    printf("3. Exit\n");
    printf("Pilihanmu\t: ");
    scanf("%d",&pilihanmu);
    switch(pilihanmu)
    {
        case 1:
            exchangeSort();
        break;
        case 2:
            bubbleSort();
        break;
        case 3:
            exit(0);
        break;
        default:
            printf("Inputan anda salah");
            getch();
            main();
        break;
    }

}
