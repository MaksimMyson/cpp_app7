#include "func.h"
using namespace std;

int main()
{
	int start, end;
	cout << "Enter start: ";
	cin >> start;
	cout << "Enter end: ";
	cin >> end;
	
	int result = sumInRange(start, end);

	cout << "Sum from " << start << " to " << end << " is " << result << endl;
	return 0;
}