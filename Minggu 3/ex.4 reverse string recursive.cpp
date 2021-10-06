#include <iostream>
#include <string.h>
using namespace std;

class reverseString	{		
	friend ostream& operator << (ostream&, reverseString&);

	private :
		char *kata = "Universitas";
	
	public :
		void reverse(char *);
	
};

void reverseString::reverse(char *s){
	if (strlen(s) == 1){
		cout<<s;
	} else {
		reverse(&s[1]);
		cout<<*s;
	}
}

ostream& operator << (ostream& out, reverseString& r){
	out<<r.reverse(r.kata *);
	
	return out;
}

int main(){
	reverseString run;
	cout<<run;
}
