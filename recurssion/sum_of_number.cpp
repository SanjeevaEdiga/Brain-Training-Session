#include<iostream>
using namespace std;

int sum(int n){
    if (n==1) return 1;
    if (n==0) return 0;
    return  n + sum(n-1);
 
}
int main(){
    cout<< "enter a number : "<<"\t";
    int n;
    cin>>n;
    cout<<sum(n)<<" is the sum of "<<n<<"\n";
    return 0;

}