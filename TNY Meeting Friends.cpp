#include <bits/stdc++.h>

using namespace std;

int main(){
	int min = INT_MAX, max = INT_MIN, amigo;
	
	for(int i=0; i<3; i++){
		scanf("%d", &amigo);
		
		if(min > amigo)
			min = amigo;
		if(max < amigo)
			max = amigo;	
	}
	printf("%d\n", max-min);
	return 0;
}
