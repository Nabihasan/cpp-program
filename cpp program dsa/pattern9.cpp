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
        int value=row;
        while(col<=row)
        {
            cout<<value<<" ";
            value=value+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}

/*
enter the n:
7
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9         
6 7 8 9 10 11     
7 8 9 10 11 12 13 
*/