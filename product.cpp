//// product class.cpp

#include "product.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

Product::Product() {
    productName = "";
    productDescription = "";
    productPrice = 0;
    productQuantity = 0;
}

// THIS WORKS!!!
void Product::SetUpdateProduct() { // DO I NEED TO USE GETLINE // may need to include "string s" ---- it is ON H FILE
    // open, add what is needed, then close
    string search; /* = s; // search for this string to update client info */         
    ifstream readFile;    // file to open
    ofstream outFile;   // file to be saved ???
    string newDescription;                       // new description for product
    string newPrice;                            // new price for product
    string newQuantity;                         // new quantity for product
    string readLine;         // variable that is checked for client name

    readFile.open("productsFile.txt");
    outFile.open("NewProductsFile.txt");
    
    if (readFile.is_open()) {
        cout << "Enter product to modify: (product name)\n"; // prompt for name of product to be updated
        getline(cin, search);
        while (getline(readFile, readLine)) {
            if(readLine == search){

                outFile << readLine;
                outFile << endl;

                cout << "Enter new product description: (description here...)\n"; // prompt for new description
                getline(cin, newDescription); // description to be updated
                cout << "Enter new product dollar amount: ($x)\n"; // prompt for new price amount
                getline(cin, newPrice); // price amount to be updated
                cout << "Enter new product quantity: (xx)\n"; // prompt to update product quantity
                getline(cin, newQuantity); //quantity gets updated

                outFile << newDescription << endl; // adding new description to file
                outFile << newPrice << endl; // adding new price amount to file
                outFile << newQuantity << endl; //adding new quantity to file
                outFile << endl;

                SkipLines(readFile, 2); // skip the lines with the outdated data

            }
            else {
                outFile << readLine << endl; // read next line if no match made
            }

        }
    }
    else {
        cout << "File not opened." << endl; // file failed to open
    }
    cout << "Product updated!" << endl;
    readFile.close(); // close the read in file
    outFile.close(); // close the outfile      --- do I need this??
}



void Product::SetNewProduct(/* string s, string t, int a DO I NEED THESE? */) {
    ofstream appendFile; // file to add new product to
    string name, description, price, quantity; // client fields to add

    appendFile.open("productsFile.txt", ios::app);

    if(appendFile.is_open()) {

    cout << "Enter name of product to add to file: (product name)" << endl; // prompt for appended product name
    getline(cin, name); 

    cout << "Enter description of product to add to file: (short description sentence/phrase)" << endl; // prompt for appended client address
    getline(cin, description);

    cout << "Enter dollar amount of price: ($x)" << endl; // prompt for appended product dollar amount
    getline(cin, price);

    cout << "Enter numerical value of quantity: (#)" <<endl; //prompt for new quantity amount
    getline(cin, quantity);

    appendFile << endl << endl << name << endl; // add name to file
    appendFile << description << endl; // add description to file
    appendFile << price << endl; // add price amount to file
    appendFile << quantity; //add quantity to file

    cout << "Done!" << endl; // finish prompt

    appendFile.close(); // close the file
    }
    else {
        cout << "File not opened." << endl; // file open failure
    }
}
    
    
    

// THIS WORKS!!
string Product::GetSpecificProductInfo() {
    // open, read in, return line of specific client info
    ifstream inFile; // file to open
    string searchName; // name of product to search for
    string fileContents; // file contents to compare with seach variable
    string infoHolder; // variable to display address and money

    inFile.open("productsFile.txt", ios::out); // open file

    if (inFile.is_open()) { // if file opens successfully
        cout << "Enter name of product whose info should be displayed: (product name)\n"; // prompt
        getline(cin, searchName); //input product name to search info on

        while (getline(inFile, fileContents)) {

            if (fileContents == searchName) {
                cout << fileContents << endl;

                getline(inFile, infoHolder);

                cout << infoHolder << endl;

                getline(inFile, infoHolder);

                cout << infoHolder << endl;
                
                }
        }
        inFile.close(); // close file
    }

}

int Product::GetProductSales() {

}

// THIS WORKS!!!
string Product::GetAllProduct() {
    fstream readFile; // file to open
    string display; // variable to feed in file contents
    readFile.open("productsFile.txt", ios::in); // open file to read to console

    if (readFile.is_open()) {
        while (getline(readFile, display)) { // loop to display contents of the file
            cout << display << endl;
        }

        readFile.close(); // close the file
    }
    else {
        cout << "File not opened." << endl;
    }
    return display; // FIX ME: do I need this?
}

int Product::GetAllProductSales() {

}

void Product::SkipLines(ifstream& fFile, int nLines) { // method to skip lines in file search maneuvering 
    string dummyLine;
    for (int i = 0; i < nLines; ++i) {
        getline(fFile, dummyLine);
    }
} 
