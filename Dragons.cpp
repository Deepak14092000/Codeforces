#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_dragones, fuerza, bonus[1005], dragones[1005],i, cont = 0, temp;
	
	scanf("%d %d", &fuerza,&num_dragones);
	
	for(i=0; i<num_dragones; i++){
		scanf("%d %d", &dragones[i], &bonus[i]);
	}
	
	while(1){
		temp = cont;
		for(i=0; i<num_dragones; i++){
			if(fuerza > dragones[i] && dragones[i] > -1){
				fuerza += bonus[i];
				dragones[i] =  -1;
				cont++;
			}
		}
		
		
		if(cont == num_dragones){
			printf("YES\n");
			break;
		}
		
		else if(cont == temp){
			printf("NO\n");
			break;
		}
		
		
	}
	
	return 0;
}
