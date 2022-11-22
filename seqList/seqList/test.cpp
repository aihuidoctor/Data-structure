#include "seqList.h"
#include <iostream>

using namespace std;

int main() {
	int iChoice = -1;
	do {
		cout << "************Please enter your choice:************" << endl;
		cout << "************0.Quit                   ************" << endl;
		cin >> iChoice;
		switch (iChoice)
			{
		default: {
			cout << "Wrong option! Please choose an option again:" << endl;
			}
				break;
			}
	} while (iChoice != 0);



	return 0;
}