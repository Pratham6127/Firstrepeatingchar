#include<bits/stdc++.h>
using namespace std;

char repeating(string s){

    unordered_map<char,int>freq;

    for(char c:s){

        if(freq[c]==1){

            return c;

        }
        else{
            freq[c]++;
        }
    }
    return '\0';


    
}
int main(){

    string s;
    cout<<"Enter the string";

    cin>>s;

    char ans=repeating(s);
    
    if(ans=='\0'){
        cout<<"No repeating character found";
    }
    else{
        cout<<ans;
    }

    return 0;
}