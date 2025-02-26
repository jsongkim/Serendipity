#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void reports() {

char rChoice;

do{
system("clear");

cout << "▛▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▜\n";
cout << "▌                                                                                ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌                            Serendipity Booksellers                             ▐\n";
cout << "▌                                 Reports Menu                                   ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌ 1. Inventory Listing                                                           ▐\n";
cout << "▌ 2. Inventory Wholesale Value                                                   ▐\n";
cout << "▌ 3. Inventory Retail Value                                                      ▐\n";
cout << "▌ 4. Listing by Quantity                                                         ▐\n";
cout << "▌ 5. Listing by Cost                                                             ▐\n";
cout << "▌ 6. Listing by Age                                                              ▐\n";
cout << "▌ 7. Return to Main Menu                                                         ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▙▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▟\n";

cout << "\nEnter your choice : ";
cin >> rChoice;

switch (rChoice) {
        case '1':
                cout << "\nYou have selected item 1. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '2':
                cout << "\nYou have selected item 2. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
        break;
        case '3':
                cout << "\nYou have selected item 3. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '4':
                cout << "\nYou have selected item 4. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '5':
                cout << "\nYou have selected item 5. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '6':
                cout << "\nYou have selected item 6. " << endl;
                cout << setw(47) << "Press ENTER to continue..." << endl;
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '7':
                cout << "\nYou have selected item 7. " << endl;
                break;
        default:
                cout << "\n'" << rChoice << "' " << "is invalid. Please enter a number from 1 - 7. \n";
}
}while (rChoice != '7');

return;

}
