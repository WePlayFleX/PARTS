//#include <iostream>
//
//using namespace std;
//
//struct part
//{
//	int modelnumber;
//	int partnumber;
//	float cost;
//};
//
//int main()
//{
//	part part1;
//	part1.modelnumber = 6244;
//	part1.partnumber = 373;
//	part1.cost = 217.55F;
//
//	cout << "Model " << part1.modelnumber;
//	cout << ", detail " << part1.partnumber;
//	cout << ", cost $ " << part1.cost << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Part
//{
//public:
//	void setpart(int mn, int pn, float c)
//	{
//		modelNumber = mn;
//		partNumber = pn;
//		cost = c;
//	}
//
//	void showpart()
//	{
//		cout << "Model " << modelNumber;
//		cout << ", detail " << partNumber;
//		cout << ", cost $ " << cost << endl;
//	}
//private:
//	int modelNumber;
//	int partNumber;
//	float cost;
//};
//
//
//
//int main()
//{
//	Part part1;
//	part1.setpart(6244, 373, 217.55F);
//	part1.showpart();
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int SIZE = 4;
//
//struct part
//{
//	int modelnumber;
//	int partnumber;
//	float cost;
//};
//
//int main()
//{
//	part apart[SIZE];
//
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		cout << endl;
//		cout << "Enter model number: ";
//		cin >> apart[i].modelnumber;
//		cout << "Enter part number: ";
//		cin >> apart[i].partnumber;
//		cout << "Enter cost: ";
//		cin >> apart[i].cost;
//	}
//
//	cout << endl;
//
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		cout << "Model " << apart[i].modelnumber;
//		cout << " Part " << apart[i].partnumber;
//		cout << " Cost " << apart[i].cost << endl;
//	}
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <cstring>

#pragma warning(disable : 4996)

using namespace std;

const int SIZE = 30;

class Part
{
private:
	char partName[SIZE];
	int partNumber;
	double cost;

public:
	void setpart(char pname[], int pn, double c)
	{
		strcpy(partName, pname);
		partNumber = pn;
		cost = c;
	}

	void showpart()
	{
		cout << "Name = " << partName;
		cout << ", number = " << partNumber;
		cout << ", cost = " << cost << "$" << endl;
	}
};

int main()
{
	Part part1, part2;

	part1.setpart("Coupling", 473, 217.55);
	part2.setpart("Vorotok", 9924, 419.25);

	cout << "\nFirst detail: ";
	part1.showpart();
	cout << "\nSecond detail: ";
	part2.showpart();

	system("pause");
	return 0;
}