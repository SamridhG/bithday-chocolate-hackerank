#include<iostream>
using namespace std;
int main()
{int n,d,m;
   
       int i,count=0;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cin>>d>>m;
       for( i=0;i<n;i++)
       { 
           int sum=0;
           for(int j=i;j< (m+i) && n;j++)
           {
               sum=sum+a[j];
           }
       if(sum==d)
       {
         ++count;
       }
       }
       cout<<count;
   

    return 0;
}

    
