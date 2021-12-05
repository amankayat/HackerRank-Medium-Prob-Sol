#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int k=0;
	
	cin>>n;
	vector<pair<long,int>> arr;
	vector<int> a;

	for(int i=0;i<n;i++)
	{
		long x;
		cin>>x;
		a.push_back(x);
		
	}
	cin>>m;
	vector<long> b;
	vector<long> rank;
	for(int j=0;j<m;j++)
	{	long x;
		cin>>x;
		b.push_back(x);
		
	}
	
	//remove duplicate
a.erase(unique(a.begin(),a.end()),a.end());

for(int i=0;i<a.size();i++)
	{
		arr.push_back(make_pair(a[i],i+1));
	}
	
sort(arr.begin(),arr.end());

	
//	for(int i=0;i<a.size();i++)
//	{
//		cout<<arr[i].first<<" "<<arr[i].second<<" ";
//		cout<<endl;
//	}
//	
	int copy=0;
	
	for(int i=0;i<b.size();i++){
	
		int flag=0;
		for( int j=copy;j<arr.size();){
//			cout<<" "<<a[j]<<" ";
			if(b[i] < arr[j].first)
			{
			rank.push_back(arr[j].second+1); 
			copy =j;
			flag=1;
			break;	
			}
			
			 if(b[i]==arr[j].first){
			copy=j;				
			flag=1;
			
			rank.push_back(arr[j].second);
				break;

			}
			j++;
		}
		if(flag==0){
			
			rank.push_back(1);
		}
	
	}
	
	for(int i=0;i<rank.size();i++)
	cout<<rank[i]<<"\n";
}
