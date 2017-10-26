#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_participantes, posicion, i, puntos[100], cont=0, valor;
	
	scanf("%d %d", &num_participantes, &posicion);
	
	for(i=0; i<num_participantes; i++){
		scanf("%d", &puntos[i]);
		
		if(i == posicion-1)
			valor = puntos[i];
	}
	
	for(i=0; i < num_participantes; i++){
		if(valor <= puntos[i] && puntos[i]!=0)
			cont++;
	}
	
	printf("%d\n", cont);
	
	return 0;
}
