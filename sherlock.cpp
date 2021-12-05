#include<iostream>
#include<stdio.h>
using namespace std;
string sherlock_valid(string str){

	int hash[26] = {0};
	int index[26];
	int count=0;
	int k=0,one=0,count2=0;
	//hashing of string elements
	for(int i=0;i<str.length();i++)
	hash[str[i]-'a']++;
	
	//store index of greater than zero elements in array
	for(int i=0;i<26;i++){
		if(hash[i]>0){
		
		
			index[k] = i;
			k++;
			}
			}
//find hash max
int max = hash[0];
for(int i=0;i<26;i++){
	if(hash[i]>max)
	max = hash[i];
}

		for(int i=0;i<k;i++){
				//all the freq are same
				if(max==hash[index[i]])
				count++;
				//al are same nd one freq is 1
				else if(hash[index[i]]==1)
				one++;
				
				//all freq are same only one is higher by 1
				if(max-1==hash[index[i]])
				count2++;				
				
				
			}
						
				
				
				
		
	
//checking value
				if(count==k)
				return "YES";
				else if(one==1 && count==k-1)
				return "YES";
				else if(count2==k-1)
				return "YES";
				else
				return "NO";
				
}

//main
int main(){
	string str;
	cin>>str;
	
	string res;
	res  = sherlock_valid(str);
	cout<<res;
}
