
#include <bits/stdc++.h>
using namespace std;
string encryption_ptob(string s){
  	
    int k=0;
    int len = s.length();
    int row =floor(sqrt(len));
    int col = ceil(sqrt(len));
    if(row*col <len)
    row++;
    
     char a[row][col];
    
    
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j] = s[k];
            k++;
        }
    }

    string ans="";
    //display
    for(int i=0;i<col;i++){
        
        for(int j=0;j<row;j++){
    char c  = a[j][i];

			if(c)
			ans+=c;
        
        }
        ans+=" ";
    }
        
   
        return ans;
}

    
    
    

int main(){
    string str;
    cin>>str;
    
   string str = encryption_ptob(str);
   cout<<str;
}
