#include <iostream>

using namespace std;

int main()
{
    int rok;

    cout << "Ktory mamy rok? " << endl;
    cin >> rok;

    if(((rok%4 == 0 && rok%100 != 0) || rok%400 == 0)){
        cout << "Ten rok jest przestepny!";
    }
        else{
            cout << "Ten rok nie jest przestepny!";
    }

    return 0;

}
