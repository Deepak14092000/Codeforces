#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, agua_obtenida = 0, agua_faltante = 0, solicitud, res = 0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &solicitud);
		if(solicitud < 0){
			agua_faltante = (solicitud + agua_obtenida);
			
			agua_obtenida = agua_faltante;				
			if(agua_faltante < 0){
				res += abs(agua_faltante);
				agua_obtenida = 0;
			}
					
		}
		else{
			agua_obtenida+=solicitud;	
		}
		
	}
		printf("%d\n", res);	
	
	return 0;
}
