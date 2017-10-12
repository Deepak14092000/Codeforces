#include <bits/stdc++.h>

using namespace std;

int main(){
	int largo, ancho, cont=0;
	char color[10];
	scanf("%d %d", &largo, &ancho);
	
	for(int i=0; i<largo*ancho; i++){
		scanf("%s", color);
		
		if(color[0] == 'C' || color[0] == 'M' || color[0] == 'Y')
			cont++;
	}
	(cont != 0) ? printf("#Color\n") : printf("#Black&White\n");
	return 0;
}
