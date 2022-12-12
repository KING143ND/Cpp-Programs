#include<iostream> 

using namespace std;

int c = 45;

int main(){
    
    // *************Build in Data types****************
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;

    // ************* Float, double and long double Literals****************
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float f = 455;
    float & g = f;
    cout<<"The value of f is "<<f<<endl;
    cout<<"The value of g is "<<g<<endl;

    // *************Typecasting**************** 
    int h = 45;   
    float i = 45.46;
    cout<<"The value of h is "<<(float)h<<endl;
    cout<<"The value of h is "<<float(h)<<endl;

    cout<<"The value of i is "<<(int)i<<endl;
    cout<<"The value of i is "<<int(i)<<endl;
    int j = int(i);

    cout<<"The expression is "<<h + i<<endl;
    cout<<"The expression is "<<h + int(i)<<endl;
    cout<<"The expression is "<<h + (int)i<<endl;


    return 0;
}
