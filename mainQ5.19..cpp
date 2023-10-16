//Calculating π) Calculate the value of π from the infinite series
//pi= 4-(4/3)+(4/5)-(4/7)+.......      ta 1000 ta
// a=4(1-1/3+1/5-1/7+........)  we have to write a for loop for this the formula for calculating is a=((-1)^i)/(2i+1)

#include <iostream>

#include<cmath>
using namespace std;


    int main() {

        //pi is written as a.
        double a=1;
        double sum=0;

                for (int i=0; i<=1000; i++){
                    double base;
                    double exponent;
                   double  b=pow(-1,i);
                   double c=((2*i)+1);
                   a=b/c;
                   sum+=a;}
cout<<"a is :"<<4*sum;


    return 0;
}
