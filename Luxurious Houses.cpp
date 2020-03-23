#include <bits/stdc++.h>

using namespace std;


int main(){
	int num_casas, i, casas[100005], maximo;
	
	scanf("%d", &num_casas);
	
	for(i=0; i<num_casas; i++)
		scanf("%d", &casas[i]);	
	
	maximo = casas[num_casas-1];
	casas[num_casas-1] = 0;
	
	for(i=num_casas-2; i>=0; i--){
		if(maximo < casas[i]){
			maximo = casas[i];
			casas[i] = 0;
		}
		else if(maximo == casas[i]){
			casas[i] = 1;
		}
		else{
			casas[i] = maximo - casas[i] + 1;
		}
	}
	
	for(i=0; i<num_casas; i++)
		printf("%d ", casas[i]);
	
	printf("\n");
	return 0;
}


