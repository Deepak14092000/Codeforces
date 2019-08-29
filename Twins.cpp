#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_monedas, suma=0, tomar = 0, monedas[500], i, cont = 0;
	
	scanf("%d", &num_monedas);
	
	for(i=0; i<num_monedas; i++){
		scanf("%d", &monedas[i]);
		suma+=monedas[i];
	}
	
	sort(monedas, monedas+i);
	
	for(i=num_monedas-1; i>=0; i--){
		tomar+=monedas[i];
		suma-=monedas[i];
		cont++;
		
		if(tomar > suma)
			break;
	}
	
	printf("%d\n", cont);
	
	return 0;
}
