#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0) return 1;
    return  n * factorial(n-1);
 
}
int main(){
    cout<< "enter a number : "<<"\t";
    int n;
    cin>>n;
    cout<<factorial(n)<<" is the factorial of "<<n<<"\n";
    return 0;

}