#include <stdio.h>

void bubbleSortAsc (int arr[], int n)
{
    int i, j, angka;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                angka = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = angka;
            }
        }
    }
}
void bubbleSortDesc(int arr[], int n)
{
    int i, j, angka;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){
                angka = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = angka;
            }
        }
    }
}
int main()
{
    int array[100], n,m=1, i, j;
    printf("Masukkan banyak angka : ");
    scanf("%d", &n);

        for(i = 0; i < n; i++)
        {
            printf("Masukkan angka ke-%d : ",m);
            m++;
            scanf("%d", &array[i]);
        }
        printf("\n");

    bubbleSortAsc (array, n);

    printf("Hasil pengurutan (ascending) : \n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", array [i]);
        }
        printf("\n");

    bubbleSortDesc(array,  n);

    printf("Hasil pengurutan (descending) : \n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", array [i]);
        }
        printf("\n");
}
