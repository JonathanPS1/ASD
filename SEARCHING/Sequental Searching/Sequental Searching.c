#include <stdio.h>
int main()
{
  int n, i,j,data[n],cari[3], jumlah = 0;
  printf("Mau berapa banyak data yang disimpan? ");
  scanf("%d", &n);
  printf("Masukkan %d integer\n", n);
  for (i = 0; i <= n; i++)
  {
        printf("Angka ke-%d = ", i);
        scanf("%d", &data[i]);
  }
  printf("Mau angka yang dicari pertama ? ");
  scanf("%d", &cari[0]);
  printf("\nMau angka yang dicari kedua ? ");
  scanf("%d", &cari[1]);

  for (i = 0; i < n; i++)
    {
    for (j = 0; j < 2; j++)
    {
      if (data[i] == cari[j])
      {
        printf("\nAngka %d berhasil ditemukan dilokasi ke %d\n", cari[j], i);
        jumlah++;
      }
    }
  }
  if (jumlah > 0)
    {
        printf("\nAngka berhasil ditemukan sebanyak %d", jumlah);
    }
  else
    {
        printf("\nTidak ada angka yang ditemukan ");
    }
}
