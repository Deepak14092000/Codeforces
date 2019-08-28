#include <bits/stdc++.h>

using namespace std;

int main(){	
	int digitos, divisible;
	
	scanf("%d %d", &digitos, &divisible);
	
	if(digitos == 1 && divisible == 10)
		printf("-1\n");
	
	else{
		
		if(divisible == 10)
			digitos--;
		
		while(digitos--){
			if(divisible != 10)
				printf("%d", divisible);
			else
				printf("1");
		}
		
		(divisible == 10) ? printf("0\n") : printf("\n");
	}
	return 0;
}
