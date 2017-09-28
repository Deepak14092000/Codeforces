#include <cstdio>
#include <map>
#include <climits>
#include <cmath>

using namespace std;

int main(){
	map <int, int> posibles;
	map <int, int> :: iterator it;
	int num_casas, dolares_dispo, casa_chica, diferencia =INT_MAX, casas, i;
	
	scanf("%d %d %d", &num_casas, &casa_chica, &dolares_dispo); 
	
	for(i=1 ; i<=num_casas; i++){
		scanf("%d", &casas);
		
		if(casas>0 && casas <= dolares_dispo)
			posibles[i] = casas;
	}
	for(it = posibles.begin(); it != posibles.end(); it++){

		if(diferencia > abs(it->first - casa_chica))
			diferencia = abs(it->first -casa_chica);
			
	}
	printf("%d\n", diferencia*10);
	
	
	return 0;
}
