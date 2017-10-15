#include <bits/stdc++.h>

using namespace std;

int main(){
	int digitos, tamano, primer[100], segun[100], i, l=0, cont=0;
	char valor[200];
	
	scanf("%d %s", &digitos, valor);
	
	tamano=strlen(valor);
	
	for(i=0; i<tamano; i++){
		
		if(i <  tamano/2)
			primer[i] = valor[i]-'0';
		
		else
			segun[l] = valor[i] - '0', l++;
	}
	
	sort(primer, primer+l);
	sort(segun, segun+l);
	
	for(i=0; i<l; i++){
		
		if(primer[i] < segun[i])
			cont++;
			
		if(primer[i] == segun[i])
			cont = INT_MAX;
			
	}
	(cont == 0 || cont == tamano/2) ? printf("YES\n") : printf("NO\n");
	
return 0;
}
