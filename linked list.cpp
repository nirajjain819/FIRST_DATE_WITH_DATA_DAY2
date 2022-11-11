#include<bits/stdc++.h>
using namespace std;
int call_by_reference_pointer(int* n){
cout<<"address of n in call by value function:"<<n<<endl;
*n*=*n;
return n;	
}
int main(){

int n=8;
cout<<"address of n in main()"<<&n<<endl;
call_by_reference_pointer(&n);
cout<<"ans"<<n<<endl;
cout<<"value of n"<<n<<endl;
return 0;
}
	

