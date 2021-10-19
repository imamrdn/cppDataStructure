#include <iostream>
#include <conio.h>
using namespace std;

class Date {
	public :
		Date() { 
			day = 1; 
			month = 1; 
			year = 1990; 
		}
		
		Date(int theDay, int theMonth, int theYear) { 
			day = theDay; 
			month = theMonth; 
			year = theYear; 
		}
		
		void printDate() {
			cout << day << "/" << month << "/" << year;
		}
	
	private :
	int day, month, year;
};

int main() {
    Date(date1);
    Date date2(17, 8, 1945);
    date1.printDate();
    cout << endl;
    date2.printDate();

    getch();
    return 0;
}
