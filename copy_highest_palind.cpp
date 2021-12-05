#include<iostream>
#include<stdio.h>

using namespace std;
string highest_palindrome(string str,int n,int k){
	int change[n]={0};
 
 	//checking
 	if(n==1){
 		
 		if(k>0)
 		return "9";
		else
		return str;
	 }
	 
	 
	 int i = 0,j=n-1;
	 
	 while(i<=j){
	 	if(str[i]==str[j])
	 	{
	 		
		 }
	 	else{
	 		if(k==0)
	 		return "-1";
		 
	 	
	 	
	 	if(str[i]>str[j]){
	 		str[j]= str[i];
	 		k--;
	 		change[j] = 1;
		 }
		 else if(str[j]>str[i]){
		 	str[i]=str[j];
		 	k--;
		 	change[i] = 1;
		 }
	}
		 i++;
		 j--;
	 }
	 
	 
	 if(k>0){
	 	i=0;j=n-1;
	 	while(i<=j && k>0){
	 		if(str[i]!='9'){
	 			
			 
	 		
	 		if(change[i]==1 ||change[j]==1){
	 			str[i] = '9';
	 			str[j] = '9';
	 			k--;
			 }
			 else{
			 	if(k>1){
			 		str[i] = '9';
			 		str[j] = '9';
			 		k-=2;
				 }
			 }
		}
		 i++;
			j--;
			 if(i==j && k>=1){
			 	str[i] = '9';
			 	
			 	break;
			 }
			
		 }
	 }
	 
 	return str;
}

int main(){
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
cout<<highest_palindrome(str,n,k);


}

