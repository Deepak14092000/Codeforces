#include <bits/stdc++.h>

using namespace std;

int main(){
	int dias, ganancias, maximo = 0, temp = 0, cont = 0;
	
	scanf("%d", &dias);
	
	while(dias--){
		scanf("%d", &ganancias);
		
		if(ganancias >= temp){
			cont++;
			if(cont > maximo)
				maximo = cont;
		}
		else{
			cont = 1;
		}
			
		temp = ganancias;
	}
	
	printf("%d\n", maximo);
	
	return 0;
}
