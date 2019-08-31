#include<bits/stdc++.h>

using namespace std;

long long int arr[10000000] = {0};

int main(){
	map <long long int,long long int> tprimes;
	long long int casos, i, j, valor;
	
	for(i=2; i<=1000000; i++){
		
		if(arr[i] == 0){
			arr[i] = 1;
			tprimes[i*i];
			
			for(j=i*2; j<=1000000; j+=i){
				arr[j]=2;	
			}
		}
		
	}
	
	cin>>casos;
	
	while(casos--){
		cin>>valor;
		
		(tprimes.count(valor) > 0) ? printf("YES\n") : printf("NO\n");
	}
	
	return 0;
}
