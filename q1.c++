#include <iostream>
using namespace std;
int main(){
int units;
double totalCharges= {0};
cout<<"\nEnter number of units consumed : "; cin>>units;
if (units <= 100)
totalCharges = units * 0.60;
else if (units <= 300)
totalCharges = (100 * 0.60) + ((units - 100) * 0.80);
else
totalCharges = (100 * 0.60) + (200 * 0.80) + ((units - 300) *
0.90);
if (totalCharges < 50) { totalCharges = 50;}
if (totalCharges > 300){ totalCharges += totalCharges * 0.15;}
cout << "Units Consumed : "<< units << endl;
cout << "Total Charges : Rs. " << totalCharges << endl;
return 0;
}