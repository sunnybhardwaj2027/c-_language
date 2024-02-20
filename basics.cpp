
#include<iostream>
using namespace std;
/*
int main(){
    cout << "Hello world!" << endl;

    int a = 123;
    cout << a << endl;

    char ch = 'a';
    cout << ch << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    bool e=true;
    cout << e << endl;


    int size1 = sizeof(a);
    cout << size1 << endl;

    int size2 = sizeof(ch);
    cout << size2 << endl;

    int size3 = sizeof(f);
    cout << size3 << endl;

    int size4 = sizeof(d);
    cout << size4 << endl;

    int size5=sizeof(e);
    cout << size5 << endl;
}
*/
/*
int main()
{
    //type casting
    int a='a';
    cout << a << endl; // output--97

    char ch = 97;
    cout << ch << endl; // output--a

    char ch1 = 123456;
    cout << ch1 << endl; // output--@

    unsigned int b = 112; //output -- 112
    cout << b << endl;

    unsigned c = -112;
    cout << c << endl; //output-- 4294967184
}
*/
/*
int main()
{
    int a = 2;
    int b = 3;
    bool first = (a==b);

    cout << first << endl;
}
*/
/*
int main()
{
    int a;
    a=cin.get(); // input--'1' but a is int ASCII(1)=49,' '

    cout << a << endl; //output = 49,32
}
*/

int main()
{
    char ch;
    printf("ch: ");
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is lowercase letter" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << ch << " is uppercase letter" << endl;
    }
    else if(ch >= 48 && ch <= 57){
        cout << ch << " is numric value" << endl;
    }
    else{
        cout << ch << " is special character" << endl; 
    }

}