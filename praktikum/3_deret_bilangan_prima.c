#include <stdio.h>

int main(){
    int akhir;
    int bilangan;

    printf("Masukan batas akhir bilangan \n");
    scanf("%d",&akhir);

    printf("Hasil ");

    for(int i=1;i<=akhir;i++){
		bilangan = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				bilangan=bilangan+1;
			}
		}
		if (bilangan==2){
            printf(" %d",i);
        }
	}

    return 0;
}