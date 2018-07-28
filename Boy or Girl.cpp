#include <bits/stdc++.h>

using namespace std;

int main(){
	map <char, int> letras;
	char usuario[105];
	
	scanf("%s", usuario);
	
	for(int i=0; i<strlen(usuario); i++){
		letras[usuario[i]];
	}
	
	(letras.size() % 2 == 0) ? printf("CHAT WITH HER!\n") : printf("IGNORE HIM!\n");
	
	return 0;
}
