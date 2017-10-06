#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> barras;
	map <int, int> ::iterator it;
	
	int num_barras, longitud, max = INT_MIN;
	
	scanf("%d", &num_barras);
	
	while(num_barras--){
		scanf("%d", &longitud);
		
		barras[longitud] ++;
	}
	
	for(it = barras.begin(); it!=barras.end(); it++){
		if(max < it->second)
			max = it->second;
	}
	
	printf("%d %d\n", max, barras.size());

	return 0;
}
