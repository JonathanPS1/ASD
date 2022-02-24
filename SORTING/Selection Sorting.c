#include <stdio.h>

void selectionSortAsc(int arr[], int n)
{
  int i, j, posisi, swap;
  for(i = 0; i < (n-1); i++)
    {
    posisi = i;
    for (j = i + 1; j < n; j++)
     {
        if(arr[posisi] > arr[j])
        {
            posisi = j;
        }
     }
    if(posisi != i)
    {
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
  }
}

void selectionSortDsc(int arr[], int n)
{
  int i, j, posisi, swap;
  for(i = 0; i < (n-1); i++)
    {
    posisi = i;
    for (j = i + 1; j < n; j++)
     {
        if(arr[posisi] < arr[j])
        {
            posisi = j;
        }
     }
    if(posisi != i)
    {
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
  }
}

int main()
{
  int array[100], n, m=1, i, j;
  printf("Masukkan banyak angka : ");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
    {
        printf("Masukkan angka ke-%d : ",m);
        m++;
        scanf("%d", &array[i]);
    }
    printf("\n");

  selectionSortAsc(array, n);

  printf("Hasil pengurutan (Ascending) : \n");

  for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
  printf("\n");

  selectionSortDsc(array, n);

  printf("Hasil pengurutan (descending) : \n");
  for(i = 0; i < n; i++)
    {
        printf("%d ", array [i]);
    }
    printf("\n");
}
