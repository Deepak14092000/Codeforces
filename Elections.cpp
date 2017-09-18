#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int candidatos, ciudades, i, j, votos, maximo=-1, gana=-1,  ganador[100], pos, max=0;
	
	scanf("%d %d", &candidatos, &ciudades);
	
	fill(ganador, ganador+candidatos, 0);
	
	for(i=0; i<ciudades; i++){
		for(j=0; j<candidatos; j++){
			scanf("%d", &votos);
			
			if(maximo < votos)
				maximo = votos, pos=j;
		}
		ganador[pos]++;
		maximo=-1;
	}

	for(i=0; i<candidatos; i++){
		if(gana<ganador[i])
			gana=ganador[i], max=i+1;
		
	}

	printf("%d\n", max);

return 0;
}