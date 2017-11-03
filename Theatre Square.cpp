#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int ancho, largo, losa, lo;
	long double total_a, total_l=0, to;
	
	scanf("%lld %lld %lld", &ancho, &largo, &losa);
	
	total_a = (ancho/losa);
	total_l = (largo/losa);
	
	if(ancho % losa != 0)
		total_a++;
	
	if(largo % losa != 0)
		total_l++;

	to = total_a*total_l;

	std::string total = std::to_string(to);

    for(int i=0; i<total.size(); i++){
        if(total[i]=='.')
            break;
            
        printf("%c", total[i]);
    }
    
    printf("\n");
    
	return 0;
}
