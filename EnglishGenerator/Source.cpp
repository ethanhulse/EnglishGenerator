#include "Header.h"
//Global Variables
int main() {
	const vector <string> T{"","p","t", "k", "c", "ch", "f", "th", "ph", "b", "d", "g", "v", "z", "tr","wh"};
	const vector <string> T2{ "","p","t", "k", "c", "ch", "f", "th", "ph", "b", "d", "g", "v", "z"};
	const vector <string> R2{"", "h", "j", "m", "n", "y", "ng", "w", "r", "l"};
	const vector <string> R{ "", "h", "j", "m", "n", "y", "w", "r", "l" };
	const vector <string> S{ "" ,"s" };
	const vector <string> V{ "a","o", "i", "e", "u", "oo", "oa", "ee", "ur", "ar", "or", "ear", "are", "ure","er", "y", "oi", "ou"};
	const vector <vector <string>> Cs_0{ S,T,R };
	const vector <vector <string>> Cs_1{ R2,T2,S };

	string fileName;
	cout << "File Name:";
	cin >> fileName;

	ofstream outfile(fileName + ".txt");
	string c1;
	string vow;
	string c2;
	for (int a = 0; a < Cs_0.size(); a++) {
		for (int b = 0; b < Cs_0[a].size(); b++) {
			for (int d = 0; d < V.size(); d++) {					
				for (int e = 0; e < Cs_1.size(); e++) {
					for (int f = 0; f < Cs_1[e].size(); f++) {	
						c1 = Cs_0[a][b];
						vow = V[d];
						c2 = Cs_1[e][f];
						cout << "GENERATED :: " << a << " : " << b << " : " << d << " : " << e << " : " << f << endl;
						outfile << c1 + vow + c2 << endl;
					}
				}
			}
		}
	}
	cout << "Complete.. Written to file " << fileName << ".txt" << endl;
	

	cin.ignore();
	//ReadKey Loop
	do {
		cout << "Press Enter to continue..";
	} while (cin.get() != '\n');
	return 0;
}

