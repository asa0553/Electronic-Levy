#include <iostream>
using namespace std;

int main()
{
	int amount_to_be_tax = 0;
    
    cout<< "Enter Amount :" << endl;
    
      cin >> amount_to_be_tax;
    
    float total_tax = 1.5/100 * amount_to_be_tax;
    
    
    
    if (amount_to_be_tax >= 150)
    {
        cout <<total_tax <<":This is the tax amount you will pay " << endl;
    }
    else if(amount_to_be_tax <= 100)
        {
            cout<<"There is no tax to pay"<< endl;
        } 
	return 0;
}
