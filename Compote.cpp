#include <bits/stdc++.h>

using namespace std;

int main(){
	int limones, manzanas, peras, total, min;
	
	scanf("%d %d %d", &limones, &manzanas, &peras);
	
	min = limones;
	
	total = manzanas / 2;
	
	if(total < min)
		min = total;
		
	total = peras / 4;
	
	if(total < min)
		min = total;
		
	printf("%d\n", min*7);
	
	return 0;
}
