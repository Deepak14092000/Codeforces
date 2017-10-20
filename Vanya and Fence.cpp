#include <bits/stdc++.h>

using namespace std;

int main(){
	int personas, altura_max, altura_per, total = 0;
	
	scanf("%d %d", &personas, &altura_max);
	
	while(personas--){
		
		scanf("%d", &altura_per);	
		
		(altura_per > altura_max) ? total+=2 : total++;
	}
	printf("%d\n", total);
	
	return 0;
}
