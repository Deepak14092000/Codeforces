#include <cstdio>

using namespace std;

int main(){
	int tiempo, segundo, resultado;
	scanf("%d %d %d", &tiempo, &segundo, &resultado);

	(((tiempo == resultado) || ((resultado-tiempo)%segundo == 0) || ((resultado-tiempo-1)%segundo == 0) && (resultado-tiempo-1) != 0) && (tiempo <= resultado)) ? printf("YES\n") : printf("NO\n");
	

	return 0;
}