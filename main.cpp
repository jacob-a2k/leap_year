#include <iostream>
#include <stdio.h>
#include <limits>
#include "utils.h"

using namespace std;

int choose_the_year();
int check_the_year(int number);
void repeat_the_year();
void correct_input();
int is_number(char current_sign);



int main()
{
    for(;;){

        int number = choose_the_year();

        check_the_year(number);
        repeat_the_year();

        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(),'\n');

    }

    return 0;
}

int choose_the_year( ){

	cout << "\nWitaj! Podaj dowolny rok, a ja sprawdze czy jest on przestepny!" << endl;
		int tab[ 4 ];
		char current_sign = getche();
        if( is_number(current_sign) ){
            tab[ 0 ] = is_number( current_sign );
        }
        else{
            do{
                cout << "\nTen znak nie jest liczba!"<< endl;

                current_sign = getche();

            }while( !(current_sign > '0' && current_sign <= '9') );
            tab[ 0 ] = current_sign - '0';
        }

		current_sign = getche();
		if( current_sign == '\n' ){
			return tab [ 0 ];
		}
		else if( current_sign >= '0' && current_sign <= '9' ){
			tab[ 1 ] = current_sign - '0';
		}
		else{
			cout << "Ten znak nie jest liczba!"<< endl;
            exit (0);
		}

		current_sign = getche();
		if( current_sign == '\n' ){
			return tab[ 0 ] * 10 + tab[ 1 ] ;
		}
		else if( current_sign >= '0' && current_sign <= '9' ){
			tab[ 2 ] = current_sign - '0';
		}
		else{
			cout << "Ten znak nie jest liczba!"<< endl;
            exit (0);
		}

		current_sign = getche();
		if( current_sign == '\n' ){
			return  tab[ 0 ] * 100 + tab[ 1 ] * 10 + tab[ 2 ];
		}
		else if( current_sign >= '0' && current_sign <= '9' ){
			tab[ 3 ] = current_sign - '0';
		}
		else{
			cout << "Ten znak nie jest liczba!"<< endl;
            exit (0);
		}

		for( ;; ){
				current_sign = getche();
			if( current_sign == '\n' ){
				return tab[ 0 ] * 1000 + tab[ 1 ] * 100 + tab[ 2 ] * 10 + tab[ 3 ];
		    }
		    else if( current_sign >= '0' && current_sign <= '9' ){
		    	tab[ 0 ] = tab[ 1 ];
		    	tab[ 1 ] = tab[ 2 ];
		    	tab[ 2 ] = tab[ 3 ];
		    	tab[ 3 ] = current_sign - '0';
		    }
		    else{
		    	cout << "Ten znak nie jest liczba!"<< endl;
            exit (0);
			}
		}

}

int check_the_year(int number){
    if((number%400 == 0) || (number%4 == 0 && number%100 != 0)){
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
    repeat = getchar();
    while(repeat != 't'){
        if(repeat == '\n'){
            cout << "Nie ma takiej opcji!" << endl;
            //cin.clear();
            //cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            cout << " Sprobuj wybrac ponownie!" << endl;
            repeat = getchar();
        }
        else if(repeat =='n'){
            exit(0);
        }
        else{
            cout << "Nie ma takiej opcji!" << endl;
            cin.clear();
            cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            cout << " Sprobuj wybrac ponownie!" << endl;
            repeat = getchar();
        }

    }
}
int is_number( char current_sign ){
    int number;
    if( current_sign > '0' && current_sign <= '9'){
        number = current_sign - '0';
        return number;
    }
    else{
        return 0;
    }
}




