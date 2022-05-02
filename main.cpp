#include <iostream>
#include <limits>
#include <cstdlib>
#include <stdio.h>

using namespace std;

void choose_the_year();
void check_the_year();
void repeat_the_year();
long long year;

int main()
{
    for(;;){
        choose_the_year();
        check_the_year();
        repeat_the_year();
    }
    return 0;

}
void choose_the_year(){

    cout << "\nWitaj! Podaj dowolny rok, a ja sprawdze czy jest on przestepny!" << endl;
    cin >> year;

    while(!cin.good()){
        cout << "Popelniles blad podczas wprowadzania danych! Ponow probe!" << endl;
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');

        cout << "\nWitaj! Podaj dowolny rok, a ja sprawdze czy jest on przestepny!" << endl;
        cin >> year;
    }
    }
void check_the_year(){

    if(((year%4 == 0 && year%100 != 0) || year%400 == 0)){
            cout << "Ten rok jest przestepny!";
        }
            else{
                cout << "Ten rok nie jest przestepny!";
        }
    }
void repeat_the_year(){

        cout << endl;
        cout << "\nCzy chcesz ponownie sprawdzic jakis rok ?";
        cout << "\nWcisnij t aby ponownie wpisac rok!";
        cout << "\nWcisnij n aby zakonczyc program!" << endl;

        char repeat ;
        cin >> repeat;
        while(repeat != 't'){
            if(repeat == 't');
            else if(repeat =='n'){
                exit(0);
            }
            else{
                cout << "Nie ma takiej opcji!" << endl;
                cin.clear();
                cin.ignore(numeric_limits < streamsize > ::max(), '\n');
                cout << " Sprobuj wybrac ponownie!" << endl;
                cin >> repeat;
            }

        }
}




