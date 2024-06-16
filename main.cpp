//Jose Sandoval
//Sales Receipt 
//06/15/2024

#include<iostream> // Preprocessor directive
#include <iomanip> // for setting precision

using namespace std;

int main() //main function
{
	//Information for users regarding the program
	cout << "This program establishes a store receipt for five products."<< endl;

	//Variable for item names
	string itemShoes = "Shoes";
	string itemCups = "Cups";
	string itemCharger = "Charger";
	string itemPants = "Pants";
	string itemFan = "Fan";
	 
	//Variable Item Prices
	float priceShoes = 32.99;
	float priceCups = 9.32;
	float priceCharger = 12.95;
	float pricePants = 15.18;
	float priceFan = 34.13;

	//Tax Percentage 
	const float TAX_Percentage = 0.0925; 

	//Calculations on Items
	float subtotal = priceShoes + priceCups + priceCharger + pricePants + priceFan; 

	//Calculations on Tax
	float taxAmount = subtotal * TAX_Percentage;

	// Calculations on Total Cost
	float totalCost = subtotal + taxAmount;

	//Receipt for All 
	cout << fixed << setprecision(2); // 2 decimals places for dollar amounts
	cout << "\nReceipt" << endl;
	cout << "----------------------------------------" << endl;
	cout << itemShoes << ": $" << priceShoes << endl;
	cout << itemCups << ": $" << priceCups << endl;
	cout << itemCharger << ": $" << priceCharger << endl;
	cout << itemPants << ": $" << pricePants << endl; 
	cout << itemFan << ": $" << priceFan << endl;
	cout << "----------------------------------------" << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << taxAmount << endl;
	cout << "Totl: $" << totalCost << endl;

	return 0; 

}