#include <bits/stdc++.h>

using namespace std;

int main(){
	char bin[100];
	int tamano, cont=0, i;
	
	scanf("%s", bin);
	
	for(i=strlen(bin)-1; i>=0; i--){
		if(bin[i] == '0' && cont != 6)
			cont++;
			
		if(cont == 6 && bin[i] == '1')
			cont = 7, i = -1;
	}
	
	(cont == 7) ? printf("yes\n") : printf("no\n");
	
	return 0;
}
