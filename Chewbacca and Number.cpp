#include <bits/stdc++.h>

using namespace std;

int main(){
	char numero[10000];
	int digito, i;	
	scanf("%s", numero);
	
	for(i = 0; i<strlen(numero); i++){
		digito = 9 - (numero[i]-'0');
		
		if(digito == 0 && i == 0)
			digito = 9;
		
		(digito < (numero[i]-'0')) ? printf("%d", digito) : printf("%d", numero[i]-'0');
	}
	printf("\n");
	
	return 0;
}
