#include <stdio.h>

int main(){
    int awal,akhir;

    printf("Masukan batas awal bilangan \n");
    scanf("%d",&awal);

    printf("Masukan batas akhir bilangan \n");
    scanf("%d",&akhir);

    printf("Hasil ");

    for(awal;awal <= akhir;awal++){
        if(awal%2!=0){
            printf(" %d",awal);
        }
    }

    return 0;
}