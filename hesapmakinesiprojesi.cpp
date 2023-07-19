#include<stdio.h>
int main(){
	int islem;
	float value;
	int sayi1,sayi2;
	
	printf("Islemler\n1:Toplama(+)\n2:Cikarma(-)\n3:Carpma(x)\n4:Bolme(/)\n\n\n");
	printf("Islemi Seciniz:");
	scanf("%d",&islem);
	printf("Sayi 1'i giriniz: ");
	scanf("%d",&sayi1);
	printf("Sayi 2'yi giriniz: ");
	scanf("%d",&sayi2);
	
	switch(islem){
		
		case 1:
			value=sayi1+sayi2;
			printf("Sayilarin birbirleriyle toplami %f\n",value);
			
			break;
		
		case 2:	
		if (sayi1>sayi2){
			value=sayi1-sayi2;
			printf("Sayilarin birbirleriyle farki %f\n",value);
			
			break;
	}

		case 3:
			value=sayi1*sayi2;
			printf("Sayilarin birbirleriyle carpimi %f\n: ",value);
			
			break;
		case 4:
			if(sayi2!=0){
			
			
			value=sayi1/sayi2;
			printf("Sayilarin birbirine bolumu %f\n: ",value);
			
			break;
			}
			
		default:
			printf("Gecersiz Islem!");
			
			break;
			
	}
		
	return 0;
}
