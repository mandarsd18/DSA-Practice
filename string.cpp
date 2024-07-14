#include<iostream>
using namespace std;

int main(){
    string s="mandar";
    int i=0;
    int j=s.size()-1;
    char temp;
   while (j>i)
   {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;

   }
   cout<<s;
   
   
}