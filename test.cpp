#include<iostream>
using namespace std;

void fun3(){
	int fun3var=25;
	cout<<fun3var<<endl;
}

void fun2(){
	int fun2var=20;
	cout<<fun2var<<endl;
	fun3();
}

void fun1(){
	int fun1var=15;
	cout<<fun1var<<endl;
	fun2();
}

int main(){
	int mainvar=15;
	cout<<mainvar<<endl;
	fun1();
	return 0;
}


