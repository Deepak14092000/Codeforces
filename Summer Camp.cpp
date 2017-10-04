#include <bits/stdc++.h>

using namespace std;

int main(){
	int valor, i;
	char sucesion[100000], comp[100000];
	
	for(i=1; i<=1000; i++){
		sprintf(comp, "%d", i);
		
		strcat(sucesion, comp);
	}
	scanf("%d", &valor); 
	
	printf("%c\n", sucesion[valor-1]);
	
	return 0;
}
