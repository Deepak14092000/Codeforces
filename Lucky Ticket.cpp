#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamano, sum1=0, sum2=0, cont=0;
	char boleto[50];
	
	scanf("%d %s",&tamano, boleto);
	
	
	for(int i=0; i<tamano; i++){
		if(i<tamano/2)
			sum1+=boleto[i]-'0';
			
		else 
			sum2+=boleto[i]-'0';
			
		
		if(boleto[i] == '4' || boleto[i] == '7')
			cont++;	
	}
	
	(sum1 == sum2 && cont == tamano) ? printf("YES\n") : printf("NO\n");
	
	return 0;
}
