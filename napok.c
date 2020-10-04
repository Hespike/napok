#include <stdio.h>

int main(){
	int szam;

	scanf("%d", &szam);

/*	if (szam < 1 || szam > 7) {
		printf("1-7 kozotti szamot adj meg\n");
	
		return -1; 
	}*/

	switch (szam) {
		case 1:
			printf("Hetfo\n");
			break;
		case 2:
			printf("Kedd\n");
			break;
		case 3:
			printf("Szerda\n");
			break;
		case 4:
			printf("Csutortok\n");
			break;
		case 5:
			printf("Pentek\n");
			break;
		case 6:
			printf("Szombat\n");
			break;
		case 7:
			printf("Vasarnap\n");
			break;
			default:
			printf("1-7 kozotti szamot adj meg\n");
	
		return -1;
	}

	return 0;
}