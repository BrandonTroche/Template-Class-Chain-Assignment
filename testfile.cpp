#include <iostream>
using namespace std;
int digitSum(int n) {
    int temp1, temp2;
    int counter = 0;
    temp1 = n;
    while(temp1>0){
        if(temp1>10){
        temp1 = n/10;
        temp2 = n%10;
        counter += temp2;
        } else {
            counter += temp1;
        }
    }
    
    return counter;
}
int main(){
	cout<<digitSum(12);
}