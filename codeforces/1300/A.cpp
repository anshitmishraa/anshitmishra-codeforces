#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
   int n;
   cin>>n;
   int arr[n];
   int zero=0;
   int sum=0;
   int total=0;
   for(int j=0;j<n;j++){
       cin>>arr[j];
       if(arr[j]==0){
           zero++;  // number of zero in array
       }
       sum=sum+arr[j]; //sum of array
   }  
   if(zero==0){ //no zero means product is non zero
       if(sum==0){
           cout<<"1"<<endl; 
       }
       else{
           cout<<"0"<<endl;
       }
   }
   else{
       total=zero;//add 1 to all zero element 
       sum=sum+zero;
       if(sum==0){
           cout<<total+1<<endl;
       }
       else{
           cout<<total<<endl;
       }
   }
   
   }
}