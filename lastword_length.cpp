#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.size();
    int i=0,k=0;
    //cout<<str[len-1]<<endl;
    while(!isspace(str[len-i-1])) i++;
    for(int j=0;j<len;j++)
    {
        if(isspace(str[j]))
            k++;
    }
    if(k==0)
        i=len;
    cout<<i<<endl;
    return 0;
}