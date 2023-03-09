#include<iostream>
using namespace std;
int main(){
 int x=10;
 int *ptr=&x;
 cout<<ptr<<endl;
 cout<<&x<<endl;
 *ptr=100;
 cout<<*ptr;
}
