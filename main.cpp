// MAIN PROGRAM

#include "client.h"
#include "salesrep.h"
#include "product.h"
#include "sales.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{

    Client alpha;
    SalesRep beta;
    Product gamma;
    Sales delta;

    int index;
    int subIndex;

    cout << "Welcome to Welding Central; we are happy you are here!" << endl;
    cout << "Please select which department you would like to enter:" << endl;
    cout << "Clients (Enter: 1)" << endl;
    cout << "Sales reps (Enter: 2)" << endl;
    cout << "Products (Enter: 3)" << endl;
    cout << "Sales (Enter: 4)" << endl;
    cout << "Quit (Enter: 0)" << endl;
    cin >> index;
    cin.ignore();

    while (index != 0)
    {

        switch (index)
        {
        case 1:
            while (subIndex != 0)
            {
                cout << "What would you like to do?" << endl;
                cout << "Modify client (Enter: 1)" << endl;
                cout << "Add new client (Enter: 2)" << endl;
                cout << "Get a client's info (Enter: 3)" << endl;
                cout << "View clients (Enter: 4)" << endl;
                cout << "Go back to main menu (Enter: 0)" << endl;

                cin >> subIndex;
                cin.ignore();

                switch (subIndex)
                {
                case 1:

                    alpha.SetModifyClient();

                    break;

                case 2:

                    alpha.SetNewClient();

                    break;

                case 3:

                    alpha.GetSpecificClientInfo();

                    break;

                case 4:

                    alpha.GetAllClients();

                    break;
                }
            }
            break;

        case 2:
            while (subIndex != 0)
            {
                cout << "What would you like to do?" << endl;
                cout << "Modify sales rep (Enter: 1)" << endl;
                cout << "Add new sales rep (Enter: 2)" << endl;
                cout << "Get a sales rep's info (Enter: 3)" << endl;
                cout << "View sales reps (Enter: 4)" << endl;
                cout << "View a sales rep's bonus (Enter: 5)" << endl;
                cout << "Go back to main menu (Enter: 0)" << endl;
                cin >> subIndex;
                cin.ignore();

                switch (subIndex)
                {
                case 1:

                    beta.SetModifySalesRep();

                    break;

                case 2:

                    beta.SetNewSalesRep();

                    break;

                case 3:

                    beta.GetSpecificSalesRepInfo();

                    break;

                case 4:

                    beta.GetAllSalesReps();

                    break;

                case 5:

                    beta.SalesRepBonus();

                    break;
                }
            }
            break;

        case 3:
            while (subIndex != 0)
            {
                cout << "What would you like to do?" << endl;
                cout << "Modify product (Enter: 1)" << endl;
                cout << "Add new product (Enter: 2)" << endl;
                cout << "Get a product's info (Enter: 3)" << endl;
                cout << "View products (Enter: 4)" << endl;
                cout << "Go back to main menu (Enter: 0)" << endl;

                cin >> subIndex;
                cin.ignore();

                switch (subIndex)
                {
                case 1:

                    gamma.SetUpdateProduct();

                    break;

                case 2:

                    gamma.SetNewProduct();

                    break;

                case 3:

                    gamma.GetSpecificProductInfo();

                    break;

                case 4:

                    gamma.GetAllProduct();

                    break;

                }
            }
            break;
        }

        cout << "What is next?" << endl;
        cout << "Please select which department you would like to enter:" << endl;
        cout << "Clients (Enter: 1)" << endl;
        cout << "Sales reps (Enter: 2)" << endl;
        cout << "Products (Enter: 3)" << endl;
        cout << "Sales (Enter: 4)" << endl;
        cout << "Quit (Enter: 0)" << endl;
        cin >> index;
        cin.ignore();
    }

    return 0;
}
