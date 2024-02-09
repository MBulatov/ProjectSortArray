#include<iostream>
#include<vector>

void printArray(std::vector<int> &bufferArray)
{
	for (int i = 0; i < bufferArray.size(); i++)
	{
		std::cout << i + 1 << " element: " << bufferArray[i] << std::endl;
	}
	exit(0);
}

int main()
{
	int lenthArray;
	std::cout << "Enter lenth array: ";
	std::cin >> lenthArray;

	std::vector<int>bufferArray(lenthArray);
	for (int i = 0; i < lenthArray; i++)
	{
		std::cout << "Enter " << i + 1 << " element: ";
		std::cin >> bufferArray[i];
	}

	std::string bufferParam;
	std::cout << "If you want to sort in ascending order press Y, otherwise n: ";
	std::cin >> bufferParam;
	
	if (bufferParam == "Y" || bufferParam == "n")
	{
		for (int j = 0; j < lenthArray; j++)
		{
			int bufferElement;
			for (int index = 0; index != j && index < lenthArray; index++)
			{
				if (bufferParam == "Y") 
				{
					if (bufferArray[j] < bufferArray[index])
					{
						bufferElement = bufferArray[j];
						bufferArray[j] = bufferArray[index];
						bufferArray[index] = bufferElement;
					}
				}
				if (bufferParam == "n")
				{
					if (bufferArray[j] > bufferArray[index])
					{
						bufferElement = bufferArray[index];
						bufferArray[index] = bufferArray[j];
						bufferArray[j] = bufferElement;
					}
				}
			}
		}
		printArray(bufferArray);
	}
	else
	{
		std::cout << "Error! Incorrect data!";
		exit(1);
	}
}