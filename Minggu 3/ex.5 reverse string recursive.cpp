#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

void reverse(char *s) {
	if (strlen(s) == 1)
		cout << s;
	else {
		reverse (&s[1]);
		cout << *s;
	}
}

int main() {
    char *kata = "universitas";
	reverse (kata);

    getch();
    return 0;
}
