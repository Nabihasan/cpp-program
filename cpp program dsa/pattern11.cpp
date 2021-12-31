#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n:"<<endl;
    cin>>n;
   
    int row=1;
    
    while(row<=n)
    {
        int col=1;
        char ch='A' + row -1;
        while(col<=n)
        {
            cout<< ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
/*
enter the n: formula = 'A' -row +1;
5
A A A A A    -->  row =1  = 'A'-1+1=A
B B B B B    -->  row=2   = 'A'-2+1=A+1=B
C C C C C
D D D D D
E E E E E
*/