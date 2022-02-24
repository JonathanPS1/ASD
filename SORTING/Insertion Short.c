#include <stdio.h>

void insertionShortAsc(int array[], int n)
{
    int i, j,tmp;
    for (i = 0; i < n; i++)
    {
        j = i;
    while(j > 0 && array[j-1] > array[j])
    {
        tmp = array[j];
        array[j] = array[j-1];
        array[j-1] = tmp;
        j--;
    }
    }
}

void insertionShortDsc(int array[], int n)
{
    int i, j,tmp;
    for (i = 0; i < n; i++)
    {
        j = i;
    while(j > 0 && array[j-1] < array[j])
    {
        tmp = array[j];
        array[j] = array[j-1];
        array[j-1] = tmp;
        j--;
    }
    }
}

int main()
{
  int n, array[100],i,m=1;
  printf("Masukkan banyak angka: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
        printf("Masukkan angka ke-%d : ",m);
        m++;
        scanf("%d", &array[i]);
    }
    printf("\n");

    insertionShortAsc(array, n);

  printf("Hasil pengurutan (Ascending):\n");
  for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
  printf("\n");

    insertionShortDsc(array, n);

  printf("Hasil pengurutan (Descending):\n");
  for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
  printf("\n");
  return 0;
}
