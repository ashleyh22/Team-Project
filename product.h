// product class h file
#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class Product
{ // define client class

private:
    string productName;        // name of product
    string productDescription; // short descript of what the product is
    int productPrice;          // price for 1 of the product
    int productQuantity;       // amt of product available
public:
    // FIX ME: void and string issue
    Product(); // defaulut constructor
    // void ~ClientInfo(); // deconstructor ----------------------- DO I NEED THIS, Check the doc
    void SetUpdateProduct();         // updates product
    void SetNewProduct();            // creates a new product
    string GetSpecificProductInfo(); // lists a specific product's information
    int GetProductSales();           // gets product sales
    string GetAllProduct();          // lists all the products available
    int GetAllProductSales();        // produces monthly sales report of all the products

    // typedef vector<tuple<string, string, int>> clientInfo; // prolly do not need as I am reading via cin

    // FIX ME: need method to read in client text file data
    ifstream productsFile; // open product file
    // file.open("name of csv")
    // check if (file open)
    // else (......) file.is_open()

    // FIX ME: method to read updated client info to text file
    ofstream productsWrite; // write to product file

    // may need to get rid of this, below
    void SkipLines(ifstream &, int); // method to skip lines in file search --- WORKS!!!
};

#endif

// FIX ME: QUESTION: whenever I read data into a variable what will it look like?
// how do I say show me the info for client "Nolan"?
