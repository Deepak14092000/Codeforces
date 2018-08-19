#include <bits/stdc++.h>

using namespace std;

int main(){
	bool amor = false;
	int total, arr[5005], i, pos, pos2;
	
	scanf("%d", &total);
	
	for(i=1; i<=total; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=1; i<=total ; i++){
		pos = arr[arr[i]];
		pos2 = arr[pos];
		
		
		if(pos2 == i){

			amor = true;
			break;
		}
	}
	
	
	(amor == true) ? printf("YES\n") : printf("NO\n");
	return 0;
}
