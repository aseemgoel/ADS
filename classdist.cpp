#include<iostream>
using namespace std;
class dist
{
	private: int feet;
			 double inches;
	public: 
		void get()
		{
			cout<<"\nEnter Feet And Inches: ";
			cin>>feet>>inches;			
		}
			void display()
		{
			cout<<"Addition:"<<feet<<"\'"<<inches<<"\'";	
		}
		dist add(dist);
};

dist dist::add(dist h2)
{
	dist tt;
	tt.feet=feet+h2.feet;
	tt.inches=inches+h2.inches;
	if(tt.inches>=12.00)
	{
		tt.feet++;
		tt.inches-=12.00;
	}
return (tt);
}

int main()
{
	dist obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3=obj1.add(obj2);
	obj3.display();
	return 0;
}

