#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam, v1, v2, t1, t2, total1, total2;
	
	scanf("%d %d %d %d %d", &tam, &v1, &v2, &t1, &t2);
	
	total1 = tam * v1 + t1*2;
	total2 = tam * v2 + t2 * 2;
	
	if(total1 < total2)
		printf("First\n");
		
	else if(total1 > total2)
		printf("Second\n");
		
	else 
		printf("Friendship\n");
	
	return 0;
}
