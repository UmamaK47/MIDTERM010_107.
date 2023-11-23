#include<iostream>
using namespace std;
int main()
{
	float price=0, quant, tax=0, taxRate=0, totalCost=0, cost, totalDisc;
	float discount = 0;
	char choice;
	do
	{
		cout << "----------Welcome to the Sale Tax Calculator with Discounts!----------\nEnter price of Product: ";
	    cin >> price;
		cout << "\nEnter Quantity of Product :";
		cin >> quant;
		if (quant >= 10)
		{
			cout << "\nCongrats! You won a 10% discount.\n";
		}
		cout << "\nEnter any applicable sale Tax rates :";
		cin >> tax;
		if (tax > 0)
		{
			cout << "\nYour tax rate is " << tax << "%\n";
		}

		if (quant >= 10)
		{
			
		    cost = quant * price;
			discount = (10 / 100) * cost;
			//totalDisc = cost - discount;
			
		}
		if (tax > 0)
		{
			
			cost = quant * price;
			 taxRate = (tax / 100) * cost;
			//float totalTax = cost + taxRate;
		}
		totalCost = (quant * price) - discount + taxRate;
		cout << "\nTotal Cost=" << totalCost;
		cout << "\nDo you want to Calculate again?(y/n)";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	cout << endl;
	system("pause");
	return 0;
}