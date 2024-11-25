#include <stdio.h>

int main() {
	int i, j, total = 0;
	printf("nhap so nguyen duong:");
	scanf("%d", &i);
	if(i > 0){
	    for(j = 1; j <= i; j++){
	    	total += j;
	}   printf("tong tat ca cac so tu 1 den %d la: %d", i, total);
}   else{
	printf("so nguyen duong sai");
}
    return 0;
}

