#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//
	// Calculating the size of FAT from text file given
	//

	ifstream file;
	string filename = "input.txt";
	file.open(filename);

	int size = 0;	// size of FAT
	string temp;

	while(!file.eof())
	{
		getline(file, temp);
		if(temp.length() > 0)
		{
			size += 1;
		}		
	}
	
	cout << "Size of FAT table is: " << size << endl;
	file.close();

	//
	// Storing all the elements from text file into an integer array (size of array calculated above)
	//

	file.open(filename);

	int myfat[size];	// integer array
	int looper = 0;
	
	while(!file.eof())
	{
		getline(file, temp);
		
		if(temp == "-")
		{
			myfat[looper] = -1;
		}
		else if(temp.length() == 0)
		{}
		else
		{
			myfat[looper] = stoi(temp);
		}
		looper += 1;
	}

	//
	// Getting physical block number as input from user
	//

	int myBlock;	// physical block number from user
	int blockCount = 0;	// total count of data blocks

	do{
	
		cout << endl << "Please enter the 0th physical block number (range: 0-" << size - 1 << "): ";
		cin >> myBlock;	
	
	}while(myBlock < 0 || myBlock >= size);

	//
	// Printing 0th physical block
	//
	
	cout << endl << blockCount << ":" << myBlock;
	blockCount += 1;

	//
	// Printing all physical blocks in logical appearence and adding total data blocks
	//

	if(myfat[myBlock] == -1)
	{
		cout << endl << blockCount << ":-";
		blockCount += 1;
	}
	
	while(myfat[myBlock] != -1)
	{
		myBlock = myfat[myBlock];
		cout << endl << blockCount << ":" << myBlock;
		blockCount += 1;		
		if(myfat[myBlock] == -1)
		{
			cout << endl << blockCount << ":-";
			blockCount += 1;
		}
	}

	//
	// Printing total count of data blocks
	//

	cout << endl << "Your file has " << blockCount << " data blocks" << endl;
	
	return 0;
}

