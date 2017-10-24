#include <bits/stdc++.h>

using namespace std;

int main(){
	int valor_llegar;
	
	scanf("%d", &valor_llegar);
	
	if((valor_llegar>10 && valor_llegar < 20) || (valor_llegar == 21))
		printf("4\n");
		
	else if(valor_llegar == 20)
		printf("15\n");
		
	else printf("0\n");
	
	return 0;
}
