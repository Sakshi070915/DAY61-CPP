/* Write a function square that takes an integer as a parameter and returns the square of that number. */
#include <iostream>
using namespace std;

void square(int a){
    cout<<a*a<<endl;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    square(a);
    cout<<a<<endl;
    return 0;
}