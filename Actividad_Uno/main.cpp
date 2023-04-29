#include <iostream>

using namespace std;

int main(){

    int option;
    char planets, sith, jedi;

    do{
    cout<<"---------------------------------------"<<endl;
    cout<<" Welcome to the Coruscant Jedi Library"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Please select an option\n"<<endl;

    cout<<"1- Planets and Systems Information"<<endl;
    cout<<"2- Sith Most Wanted"<<endl;
    cout<<"3- Jedi Council Members"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<"Enter your option: ";
    cin >> option;

    switch(option){
        case 1:
        do{
            cout<<"-----------------------------------"<<endl;
            cout<<"1- Planets and Systems Information"<<endl;
            cout<<"-----------------------------------"<<endl;
            
            cout<<"a- Coruscant"<<endl;
            cout<<"b- Naboo"<<endl;
            cout<<"c- Tatooine"<<endl;
            cout<<"d- Alderaan"<<endl;
            cout<<"e- Kamino"<<endl; 
            cout<<"f- Back"<<endl;
            cout<<"Enter your option: ";
            cin>>planets;

            switch (planets){
                case 'a':
                    cout<<"Coruscant is the vibrant heart and capital of the galaxy, featuring diverse mix of cultures and citizens spread over hundreds of levels."<<endl; 
                    break;
                case 'b':
                    cout<<"Naboo is a planet that is the sector capital of the Chommell sector near the Outer Rim Territories."<<endl;
                    break;
                case 'c':
                    cout<<"Tatoonie is a planet located in the Outer Rim, a region of the galaxy far removed from its core."<<endl;
                    break;
                case 'd':
                    cout<<"Aldeeran was a terrestrial planet located in the Core Worlds."<<endl;
                    break;
                case 'e':
                    cout<<"No info."<<endl;
                    break;
                case 'f':
                    cout<<"Back to the menu"<<endl;
                    break;
                default:
                    cout<<"Invalid option"<<endl;
                    break;  }
       
            } while(planets != 'f');
            break;

        case 2:
        do{
            cout<<"-------------------------"<<endl;
            cout<<"2- Sith Most Wanted"<<endl;
            cout<<"-------------------------"<<endl;


            cout<<"a- Darth Vader"<<endl;
            cout<<"b- Darth Maul"<<endl;
            cout<<"c- Darth Sidious"<<endl;
            cout<<"d- Back"<<endl;
            cout<<"Enter your option: ";
            cin>>sith;

            switch (sith){
                case 'a':
                    cout<<"Darth Vader is a Sith Lord and the apprentice of Emperor Palpatine, ruler of the Galactic Empire."<<endl;
                    break;
                case 'b':
                    cout<<"Darth Maul is a Sith Lord and the apprentice of Darth Sidious."<<endl;
                    break;
                case 'c':
                    cout<<"Darth Sidious is the Dark Lord of the Sith who planned to overthrow the Jedi and rule the galaxy."<<endl;
                    break;
                case 'd':
                    cout<<"Back to the menu"<<endl;
                    break;
                default:
                    cout<<"Invalid option"<<endl;
                    break;
            }
        }while(sith != 'd');
            break;
        
        case 3:
            cout<<"-------------------------"<<endl;
            cout<<"3- Jedi Council Members"<<endl;
            cout<<"-------------------------"<<endl;

            cout<<"a- Yoda"<<endl;
            cout<<"b- Mace Windu"<<endl;
            cout<<"c- Obi-Wan Kenobi"<<endl;
            cout<<"d- Back"<<endl;
            cout<<"Enter your option: ";
            cin>>jedi;
            do{
            switch (jedi){
                case 'a':
                    cout<<"Yoda is a legendary Jedi Master and stronger than most in his connection with the Force."<<endl;
                    break;
                case 'b':
                    cout<<"Mace Windu is a Jedi Master of the High Council during the last years of the Galactic Republic."<<endl;
                    break;
                case 'c':
                    cout<<"Obi-Wan Kenobi is a Jedi Master and the mentor of Anakin Skywalker."<<endl;
                    break;
                case 'd':
                    cout<<"Back to the menu"<<endl;
                    break;
                default:
                    cout<<"Invalid option"<<endl;
                    break;
            } 
            }while (jedi != 'd');
            break; 

}

    }while(option != 4);            


return 0;

}
