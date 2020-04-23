#include <iostream>
#include <stdlib.h> 
#include <vector>
#include <time.h>
#include <iomanip>
using namespace std;
#define ll long long

int main(){

	clock_t start, end;

	start = clock(); 

	vector<ll>v1,v2,v3;
	ll x;

	for(ll i=0;i<10000;i++){
		x = rand();
		v1.push_back(x);
	}

	for(ll i=0;i<10000;i++){
		x = rand();
		v2.push_back(x);
	}

	for(ll i=0;i<10000;i++){
		v3.push_back(v1[i]*v2[i]);
	}

	for(ll i=0;i<10000;i++){
		cout << v3[i] << " ";
	}

	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0;
}
