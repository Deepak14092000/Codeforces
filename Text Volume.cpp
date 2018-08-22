#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamano, i, cont = 0, max = 0;
	char volumen[205];
	
	scanf("%d", &tamano);
	
	for(i=0; i<=tamano; i++){
		scanf("%c", &volumen[i]);
		
		if(volumen[i] == ' ')
			cont=0;
			
		if(volumen[i] >= 'A' && volumen[i] <= 'Z')
			cont++;
		
		
		if(cont > max)
			max = cont;
	}
	
	printf("%d\n", max);
	
	return 0;
}
