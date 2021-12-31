#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n:"<<endl;
    cin>>n;
   
    int row=1;
    char start='A';
    
    while(row<=n)
    {
        int col=1;
        
        while(col<=n)
        {
            char ch='A'+row+col-2;
            cout<< ch<<" ";
           
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
/*
enter the n:
4
A B C D 
B C D E 
C D E F 
D E F G 
*/