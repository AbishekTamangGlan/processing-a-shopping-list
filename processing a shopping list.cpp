#include<iostream>
using namespace std;
const int m=40; 		
class shopping
{
	private:
		int itemcode[m];
		float itemprice[m];
		int count;
	public:
		void CNT(void)		//for initializing count to 0.
		{
			count=0;
		}
		void getitem(void);
		void displaysum(void);
		void removeitem(void);
		void displayitems(void);
		
		};
		
		//--assign values to data members of item----
			void shopping:: getitem(void)
			{
				cout<<"enter the item code:";
				cin>>itemcode[count];
				cout<<"enter the itemprice:";
				cin>>itemprice[count];
				count++;
			}
			
			//---displays total values of all items------
				void shopping:: displaysum(void)
				{
					float sum=0;
					for(int i=0;i<count;i++)
					{
						sum=sum+itemprice[i];
					}
					cout<<"\nthe total value:"<<sum<<endl;
				}
			//------ Remove a specified items--------
						void shopping:: removeitem(void)
						{
							int a;
							cout<<"\n enter the item to be removed:";
							cin>>a;
							for(int i=0;i<count;i++)
							{
								if(itemcode[i]==a)
								{
									itemprice[i]=0;
								}
							}
						}
			//--------Displaying items--------------
							void shopping::displayitems(void)
							{
								int i;
								cout<<"\n Code		Price\n";
								for(i=0;i<count;i++)
								{
									cout<<itemcode[i]<<"		"<<itemprice[i]<<endl;
								}
								cout<<"\n";
							}
//-------------------------main section------------------------------------------
int main()
{
	shopping order;
	order.CNT();
	int x;
	do				//do...while loop starts.
	{
		cout<<"\n\n You can do the following:\n";
		cout<<"Enter the appropriate number \n";
		cout<<"\n1 : Add an items";
		cout<<"\n2 : Display total values";
		cout<<"\n3 : Remove an item";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit";
			cout<<"\n\n\n What is your Option?";
			cin>>x;
			
		switch(x)
		{
			case 1 :
				order.getitem();
				system("cls");
				break;	
			case 2:
				order.displaysum();
				break;
			case 3:
				order.removeitem();
				break;
			case 4:
				order.displayitems();
				break;
			case 5:
				break;
			default:	
				cout<<"\nError in inputs: Try again \n";
				
		}
	
	} while(x!=5);						// do...while loop ends
	return 0;
}

