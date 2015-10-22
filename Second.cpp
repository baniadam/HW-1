// programming exercise 2
#include<iostream>
#include<string>
using namespace std;
class Person {
private:
	static int const  LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person() { lname = ""; fname[0] = '\0'; } // #1
	Person(const string & ln, const char * fn = "Heyyou") // #2 
	{
		lname = ln;
		for (int i = 0; i <= 5; i++)
		{
			fname[i] = fn[i];
			//fname[i + 1] = '\0';
		}
		fname[6] = '\0';
	}
	Person(string &ln, char * fn)
	{
		lname = ln;
		for (int i = 0;; i++)
		{
			fname[i] = fn[i];
			fname[i + 1] = '\0';
		}
	}

	void Show() const // firstname lastname format
	{
		cout << fname << " " << lname << endl;
	}
	void FormalShow() const // lastname, firstname format
	{
		cout << lname << " " << fname << endl;
	}
};
void main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();

}