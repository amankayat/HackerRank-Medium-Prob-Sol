#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int store[n] ;
	int current,previous;
	for(int i=0;i<n;i++)
	store[i] =1;
	
	for(int i=1;i<n;i++){
		current =i;
		previous = i-1;
		//forwarding
		if(a[current] > a[previous] ){
			store[current] = store[previous]+1;
		}
	}
	//backwarding
	for(int i=n-2;i>=0;i--){
		current =i;
		previous = i+1;
		
		if(a[current] > a[previous] && store[current]<=store[previous]){
			store[current]  =store[previous]+1;
		}
	}
	
	//display sum
	long long sum=0;
	for(int i=0;i<n;i++)
	sum+=store[i];
	
	cout<<sum;
}
