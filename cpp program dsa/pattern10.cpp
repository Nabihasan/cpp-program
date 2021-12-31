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
        
        while(col<=row)
        {
            cout<<row-col+1<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
/*
if input =4
enter the n:      formula = row -col +1.     ex- if n=4 then 
4
1         -->             = 1 -1+1=1
2 1        -->             = 2 -1+1=2,    2-2+1=1
3 2 1
4 3 2 1
*/