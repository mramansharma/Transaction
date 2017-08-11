#include <iostream>
using namespace std;

static int totalBalance=0;

class Transaction
{
	public:
	//Member Functions
	int addAmount(int bucks)
	{
		totalBalance+=bucks;
		return totalBalance;
	}

	int withDraw(int bucks)
	{
		totalBalance-=bucks;
		return totalBalance;
	}

	int checkBalance()
	{
		return totalBalance;
	}

	void accountDetails(long int mobile)
	{
		cout<<"Mobile Number: "<<mobile<<endl;
	}
};

int main()
{	
	cout<<"----------------------Welcome to World Bank----------------------"<<endl;	
	cout<<"1.Deposit"<<endl;
	cout<<"2.Withdraw"<<endl;
	cout<<"3.Statement"<<endl;
	cout<<"4.Update Account Details"<<endl<<endl;
	cout<<"Total Number of Transactions you wish to do?"<<endl;

	//Data members
	int option,amount,tTimes;
	long int mobile;

	cin>>tTimes;

	Transaction T;

	while(tTimes!=0)
	{
		cout<<"Enter Option"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
			{
				cout<<"---------Adding certain amount in your account!-------------------"<<endl;
				cin>>amount;
				if(amount>100000)
				{
					cout<<"Amount too large to deposit"<<endl;
				}
				else
				{
					T.addAmount(amount);
				}
				break;
			}

			case 2:
			{
				cout<<"---------Withdraw certain amount in your account!-----------------"<<endl;
				cin>>amount;
				if(amount>=totalBalance)
				{
					cout<<"Funds not sufficient"<<endl;
				}
				else
				{
					T.withDraw(amount);
				}
				break;
			}

			case 3:
			{
				//cout<<"---------Check your account statement!-------------------"<<endl;
				cout<<"Total Balance in your account - "<<T.checkBalance()<<endl;
				break;
			}

			case 4:
			{
				//cout<<"----------Check mini statement------------------"<<endl;
				cout<<"Update Notifications on mobile, Enter Mobile number?"<<endl;
				cin>>mobile;
				T.accountDetails(mobile);
				break;
			}

			default:
			cout<<"Enter Valid Option"<<endl;
			break;
		}
		tTimes--;
	}
	cout<<endl<<"-------Total Balance Left: "<<totalBalance<<"------------------"<<endl;
	return 0;
}
