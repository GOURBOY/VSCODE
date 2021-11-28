#include<iostream>
using namespace std;
int main(){
try{
	float f1 = new float("3.0");
	int x = f1.intValue();
	byte b = f1.byteValue();
	double d = f1.doubleValue();
cout<<x+b+d;
	}catch (NumberFormatException e) /* Line 9 */{
		cout<<"bad number"; /* Line 11 */
		}

}