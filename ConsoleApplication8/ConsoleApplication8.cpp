#include <iostream>

using namespace std;

void System_OfNumbers(int Numb=0, int Numb_sys=0) {
    unsigned int result = 0;
    if (Numb_sys == 2) {
        while (Numb) {
            result += (Numb % 2 * Numb_sys)/2;
            Numb = Numb / 2;
            Numb_sys *= 10;
        }
    }
    if (Numb_sys == 8) {
        while (Numb) {
        result += (Numb%8 * Numb_sys)/8;
        Numb = Numb / 8;
        Numb_sys *= 10;
        }
    }
    cout << result;
}




int main()
{

    // Задача 3

    /*
    int Numb = 0;
    int Numb_sys = 0;
    cout << "Please, input the number: ";
    cin >> Numb;
    cout << "Please, input the Number System: ";
    cin >> Numb_sys;

    System_OfNumbers(Numb,Numb_sys);
    */

    //Задача 4

    /*for (int i = 1; i <= 100; i++)
    {
        cout << i / 10 * i % 10 << " ";
        if (i % 10 == 0)
            cout << endl;
    }*/

    //Задача 5

    /*unsigned int checker = 0;
    int result = 0;

    cin >> checker;

    for (int i = 0; i < checker; ++i) {
        result += (i + 1) + i;
        cout<<i<<"="<<result<< endl;
    }*/

    //Задача 6

    int numb = 0;
    int numb1 = 0;
    int res = 0;

    cout << "Enter the first number: ";
    cin >> numb;
    cout << "Enter the secodn number: ";
    cin >> numb1;
    cout << "Enter the Mult of numbers: ";
    cin >> res;

    if (res == (numb * numb1)) {
        cout << "Congratulation!!";
    }
    else {
        cout << "Sorry your answer is incorrect";
    }

}

