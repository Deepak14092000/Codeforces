#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int tamano, i, cont=0, cont2=0;
	char palabra[2000], encriptar[2000];

	scanf("%d %s",&tamano, palabra);
	
	(tamano % 2 == 0) ? cont=(tamano/2)-1 : cont=tamano/2;

	encriptar[cont] = palabra[0];
	cont2=cont-1;
	cont++;

	for (i=1; i<tamano; i++){
		if (tamano % 2 == 0){
			if (i%2==0){		
				encriptar[cont2] = palabra[i];
				cont2--;
			}else{
				encriptar[cont] = palabra[i];
				cont++;
			}
		}else{
			if (i%2!=0){		
				encriptar[cont2] = palabra[i];
				cont2--;
			}else{
				encriptar[cont] = palabra[i];
				cont++;
			}	
		}
	}
	encriptar[tamano]='\0';

	printf ("%s\n", encriptar);
	return 0;               
}