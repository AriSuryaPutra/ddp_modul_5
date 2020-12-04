#include <stdio.h>

int main(){
    int akhir;
    int hasil;

    printf("Tampilkan bilangan pengali ");
    scanf("%d",&akhir);
    printf("\n");

    printf("######### TABEL PERKALIAN %d",akhir);
    printf(" #########\n");
    for(int i=1;i<=akhir;i++){
        printf("##        ");
        printf("%d",i);
        printf(" * %d",akhir);
        hasil = i*akhir;
        printf("      = %d",hasil);
        printf("          ##\n");
	}
    printf("#######################################\n");

    return 0;
}