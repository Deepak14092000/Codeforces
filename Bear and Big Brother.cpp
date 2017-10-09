#include <bits/stdc++.h>

using namespace std;

int main(){
	int oso_menor, oso_mayor, anios=0;
	
	scanf("%d %d", &oso_menor, &oso_mayor);
	
	while(oso_mayor >= oso_menor){
		oso_menor *=3;
		oso_mayor *=2;
		anios++;
	}
	printf("%d\n", anios);
	
	return 0;
}
