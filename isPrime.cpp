#include<stdio.h>
#include<math.h>
#include <iostream>
using namespace std;

bool isPrime_1(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

bool isPrime_2(int n){
	int i;
	int tmp = int(sqrt(n))+1;
	for(i=2;i<=tmp;i++){
		if(n%i==0&&n!=2) return 0;
	}
	return 1;
}

bool isPrime_3(int n){
	if(n==2) return 1;
	else if(n%2==0) return 0;
	
	int i;
	int tmp = int(sqrt(n))+1;
	for(i=3;i<=tmp;i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n=4375;
	bool res;
	//printf("Please enter a number to determine whether it's a prime number.\n");
	//scanf("%d",&n);
	res = isPrime_3(n);
	if(res) printf("%d is a prime num.\n",n);
	else printf("%d isn't a prime num.\n",n);
}
