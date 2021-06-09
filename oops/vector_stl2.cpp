#include <iostream>
#include <vector> 

using namespace std;
int main()
{
	vector<int> nums;
	
	nums.assign(5, 4);

	cout << "Vector contents: ";
	for (int a = 0; a < nums.size(); a++)
		cout << nums[a] << " ";

	nums.push_back(2);
	int n = nums.size();
	cout << "\nLast element: " << nums[n - 1];

//.nums.pop_back();

	cout << "\nVector contents: ";
	for (int a = 0; a < nums.size(); a++)
		cout << nums[a] << " ";

	nums.insert(nums.begin(), 7);

	cout << "\nFirst element: " << nums[0];
	cout << "Vector contents: ";
	for (int a = 0; a < nums.size(); a++)
		cout << nums[a] << " ";
	nums.clear ();
	cout << "\nSize after clear(): " << nums.size();			
}
