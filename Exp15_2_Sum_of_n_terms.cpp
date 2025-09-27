//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
int add_n(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+add_n(n-1);
    }
}
int main() {
    int n;
    cout << "Enter Number to find addition: ";
    cin >> n;
    cout << "Addition is " << add_n(n);
    return 0;
}
/* 
Outputs:

Case 1:
Enter Number to find addition: 5
Addition is 15

Case 2:
Enter Number to find addition: 10
Addition is 55

Case 3:
Enter Number to find addition: 0
Addition is 0
*/
