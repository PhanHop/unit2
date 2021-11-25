#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    double s,c;
    cout << "Please select the shape you want to calculate!" << endl;
    cout << "Enter 1-circle,2-square,3-triangle" << endl;
    cin >> x;
    if(x == 1){
        char a;
        cout << "Enter radius or diameter !" << endl;
        cout << "Enter r-radius, d-diameter:";
        cin >> a;
        if(a == 'r'){
            double r;
            cout << "Enter radius:";
            cin >> r;
            s = r*r*3.14;
            c = 2*r*3.14;
            cout << "The area of the circle is: " << s << endl;
            cout << "Circumference of the circle is: " << c <<endl;
        }
        else if(a == 'd'){
            double d;
            cout << "Enter diameter:";
            cin >> d;
            s = d*d*3.14/4;
            c = d*3.14;
            cout << "The area of the circle is: " << s <<endl;
            cout << "Circumference of the circle is: " << c << endl;
        }
        else{
            cout << "Only enter r or d !";
        }
    }
    else if (x == 2){
        double a;
        cout << "Enter edge:";
        cin >> a;
        s = a*a;
        c = a*4;
        cout <<"The area of the square is: " << s << endl;
        cout <<"The circumference of the square is: " << c <<endl;
    }
    else {
        cout << "Only enter 1,2";
    }
    return 0;
}
