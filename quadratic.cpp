#include <iostream>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
using namespace std;
void enter_data(double &a, double &b, double &c);
void quadratic(double a, double b, double c,
double &first_real, double &first_imag,
double &second_real, double &second_imag);
void display_results(double first_real, double first_imag,
double second_real, double second_imag);
int main() {
    void enter_data(double&a, double&b, double&c);
    cout<<"Enter a value for a:";
    cin>>a;
    cout<<"a=     "<<a;

    cout<<"Enter a value for b"<<b;
    cin>>b;
    cout<<"b=      "<<b;

    cout<<"Enter a value for c";
    cin>>c;
    cout<<"c=       "<<c;

    void quadratic(double a, double b, double c,
double &first_real, double &first_imag,
double &second_real, double &second_imag);
    double discriminant=(b*b)-4(a*c)/2a;
    if (discriminant>=0);
        first_real=(-b+sqrt(discriminant))/(2*a);
        second_real=(-b+sqrt(discriminant))/(2*a);
        first_imag==0;
        second_imag==0;
    else {
        first_real=-b/(2*a);
        second_real=(-b/2*a);
        first_imag=sqrt(-discriminant)/(2*a);
        second_imag=-sqrt(-discriminant)/(2*a);



    }
    {

    }
    void display_results(double first_real, double first_imag,
    double second_real, double second_imag);
    cout<<fixed<<setprecison(4);
    if (first_imag==0||second_imag==0) {
        cout<<"The roots of the equation are"<<first_real<<"and,"<<second_real<<";
    }

    else { cout.setf(ios::showpos);
        cout << "The roots of the equation are " << first_real << first_imag
        << "j and " << second_real << second_imag << "j." << endl
        << endl;






}