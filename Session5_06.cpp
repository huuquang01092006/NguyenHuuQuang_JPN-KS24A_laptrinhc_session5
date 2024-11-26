#include <stdio.h>
int main(){
	int elect;
	float numbe1, numbe2;
	do{
		printf("CALCULATOR\n");
	    printf("1. tong 2 so\n");
     	printf("2. hieu 2 so\n");
    	printf("3. tich 2 so\n");
	    printf("4. thuong 2 so\n");
    	printf("5. thoat 2 so\n");
	    printf("lua chon cua ban: ");
     	scanf("%d", &elect);
     	switch(elect){
     		case 1:
     			printf("nhap so thu nhat: ");
     			scanf("%f", &numbe1);
     			printf("nhap so thu hai: ");
     			scanf("%f", &numbe2);
     		    printf("%.1f + %.1f = %.2f\n", numbe1, numbe2, numbe1 + numbe2);
     		    break;
     		case 2:
     			printf("nhap so thu nhat: ");
     			scanf("%f", &numbe1);
     			printf("nhap so thu hai: ");
     			scanf("%f", &numbe2);
     		    printf("%.1f - %.1f = %.2f\n", numbe1, numbe2, numbe1 - numbe2);
     		    break;
     		case 3:
     			printf("nhap so thu nhat: ");
     			scanf("%f", &numbe1);
     			printf("nhap so thu hai: ");
     			scanf("%f", &numbe2);
     		    printf("%.1f * %.1f = %.2f\n", numbe1, numbe2, numbe1 * numbe2);
     		    break;
     		case 4:
     			printf("nhap so thu nhat: ");
     			scanf("%f", &numbe1);
     			printf("nhap so thu hai: ");
     			scanf("%f", &numbe2);
     		    printf("%.1f / %.1f = %.2f\n", numbe1, numbe2, numbe1 / numbe2);
     		    break;
     		case 5:
     			printf("thoat chuong trinh!");
     			break;
     		default:
     			printf("so khong hop le\n");
		 }
	} while (elect != 5);
	return 0;
}
