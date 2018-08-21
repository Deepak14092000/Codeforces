#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, arr[1005], i;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr+i);
	
	printf("%d\n", arr[(i-1) / 2]);
	
	return 0;
}
