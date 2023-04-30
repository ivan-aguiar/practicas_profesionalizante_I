#include <iostream>

using namespace std;

void mainMenu()
{
    cout << "---------------------------------------" << endl;
    cout << " Welcome to the Coruscant Jedi Library" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Please select an option\n"
         << endl;
    cout << "1- Planets and Systems Information" << endl;
    cout << "2- Sith Most Wanted" << endl;
    cout << "3- Jedi Council Members" << endl;
    cout << "4- Exit" << endl;
}

void planetsMenu()
{
    cout << "-----------------------------------" << endl;
    cout << "1- Planets and Systems Information" << endl;
    cout << "-----------------------------------" << endl;
    cout << "a- Coruscant" << endl;
    cout << "b- Naboo" << endl;
    cout << "c- Tatooine" << endl;
    cout << "d- Alderaan" << endl;
    cout << "e- Kamino" << endl;
    cout << "f- Back" << endl;
    cout << "-----------------------------------" << endl;
}

void sithMenu()
{
    cout << "-----------------------------------" << endl;
    cout << "2- Sith Most Wanted" << endl;
    cout << "-----------------------------------" << endl;
    cout << "a- Darth Vader" << endl;
    cout << "b- Darth Sidious" << endl;
    cout << "c- Darth Maul" << endl;
    cout << "d- Darth Tyranus" << endl;
    cout << "e- Darth Plagueis" << endl;
    cout << "f- Back" << endl;
    cout << "-----------------------------------" << endl;
}

void jediMenu()
{
    cout << "-----------------------------------" << endl;
    cout << "3- Jedi Council Members" << endl;
    cout << "-----------------------------------" << endl;
    cout << "a- Yoda" << endl;
    cout << "b- Mace Windu" << endl;
    cout << "c- Obi-Wan Kenobi" << endl;
    cout << "d- Anakin Skywalker" << endl;
    cout << "e- Qui-Gon Jinn" << endl;
    cout << "f- Back" << endl;
    cout << "-----------------------------------" << endl;
}

void mainMenuOption(int option)
{
    switch (option)
    {
    case 1:
        char planetsOption;
        do
        {
            planetsMenu();
            cout << "Enter your option: ";
            cin >> planetsOption;

            switch (planetsOption)
            {
            case 'a':
                cout << "\nCoruscant is the vibrant heart and capital of the galaxy, featuring diverse mix of cultures and citizens spread over hundreds of levels.'"<< endl;
                break;
            case 'b':
                cout << "\nNaboo is a planet that is the sector capital of the Chommell sector near the Outer Rim Territories." << endl;
                break;
            case 'c':
                cout << "\nTatoonie is a planet located in the Outer Rim, a region of the galaxy far removed from its core." << endl;
                break;
            case 'd':
                cout << "\nAldeeran was a terrestrial planet located in the Core Worlds." << endl;
                break;
            case 'e':
                cout << "\nThere is no information about a planet named Kamino" << endl;
                break;
            case 'f':
                cout << "\nBack to the menu" << endl;
                break;
            default:
                cout << "\nInvalid option" << endl;
            }
        } while (planetsOption != 'f');
        break;

    case 2:
        char sithOption;
        do
        {
            sithMenu();
            cout << "Enter your option: ";
            cin >> sithOption;

            switch (sithOption)
            {
            case 'a':
                cout << "\nDarth Vader is a Sith Lord and the apprentice of Emperor Palpatine, ruler of the Galactic Empire." << endl;
                break;
            case 'b':
                cout << "\nDarth Sidious is a Lord Sith who rules the Galactic Empire" << endl;
                break;
            case 'c':
                cout << "\nDarth Maul is a Sith Lord and the apprentice of Darth Sidious." << endl;
                break;
            case 'd':
                cout << "\nDarth Tyranus is a Sith Lord and the apprentice of Darth Sidious." << endl;
                break;
            case 'e':
                cout << "\nDarth Plagueis is a Sith Lord and the master of Darth Sidious." << endl;
                break;
            case 'f':
                cout << "\nBack to the menu" << endl;
                break;
            default:
                cout << "\nInvalid option" << endl;
            }
        } while (sithOption != 'f');
        break;

    case 3:
        char jediOption;
        do
        {
            jediMenu();
            cout << "Enter your option: ";
            cin >> jediOption;

            switch (jediOption)
            {
            case 'a':
                cout << "\nYoda is a Jedi Master and the Grand Master of the Jedi Order." << endl;
                break;
            case 'b':
                cout << "\nMace Windu is a Jedi Master and the Master of the Order." << endl;
                break;
            case 'c':
                cout << "\nObi-Wan Kenobi is a Jedi Master and the Master of Anakin Skywalker." << endl;
                break;
            case 'd':
                cout << "\nAnakin Skywalker is a Jedi Knight and the apprentice of Obi-Wan Kenobi." << endl;
                break;
            case 'e':
                cout << "\nQui-Gon Jinn is a Jedi Master and the Master of Obi-Wan Kenobi." << endl;
                break;
            case 'f':
                cout << "\nBack to the menu" << endl;
                break;
            case 'g':
                cout << "\nInvalid option" << endl;
            }
        } while (jediOption != 'f');
        break;
    case 4:
        do
        {
            cout << "\nThanks for using the Coruscant Jedi Library" << endl;
            break;
        } while (option != 4);
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }
}

int main()
{
    int option;
    do
    {
        mainMenu();
        cout << "Enter your option: ";
        cin >> option;
        mainMenuOption(option);
    } while (option != 4);

    return 0;
}
