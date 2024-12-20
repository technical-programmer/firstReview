#include <iostream>
using namespace std;

void countEvenAndOdd(int n){
    int evenCount=0;
    int oddCount=0;
    while(n>0){
        int rem=n%10;
        if(rem%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
        n/=10;
     }
     cout << "Even no are : " << evenCount << " "<< " Odd no are : " << oddCount << endl;
    }
int main(){
    int number;
    cin>>number;

    countEvenAndOdd(number);

}