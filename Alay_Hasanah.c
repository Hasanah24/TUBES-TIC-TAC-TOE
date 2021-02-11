#include <stdio.h>

int main() {
	/*DEKLARASI*/
	char penumpang[6][5];
	int x,y, total=0;
	/*ALGORITMA*/
	for(x=0; x<4; x++){
		for(y=0; y<4; y++){
			scanf("%s", &penumpang[x][y]);
		}
	}
	for(x=0; x<5; x++){
		for(y=0; y<5; y++){
			if(penumpang[x][y]=='x'){
				total+=50000;
			}
		}
	}
	printf("%d", total);
	return 0;
}
