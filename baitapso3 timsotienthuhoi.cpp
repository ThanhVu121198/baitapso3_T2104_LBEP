#include<stdio.h>
#include<math.h>

    int main(){
    	float vongoc,laisuatky,soky,thuhoi;
    	printf("Nhap von goc: ");
    	scanf("%f",&vongoc);
    	printf("Nhap lai suat theo ky: ");
    	scanf("%f",&laisuatky);
    	printf("So ky gui: ");
    	scanf("%f",&soky);
    	
    	
    	
    	thuhoi = vongoc * pow((1 + laisuatky),soky);
    	
    	printf("\nso tien thu hoi la: %lf",thuhoi);
         
    	
    	return 0;
    }
    	
