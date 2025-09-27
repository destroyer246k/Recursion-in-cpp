//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main() {
    int n;
    cout << "Enter Number to find factorial: ";
    cin >> n;
    cout << "Factorial is " << factorial(n);
    return 0;
}
/* 
Outputs:

Case 1:
Enter Number to find factorial: 5
Factorial is 120

Case 2:
Enter Number to find factorial: 0
Factorial is 1

Case 3:
Enter Number to find factorial: 1
Factorial is 1
*/
