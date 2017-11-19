#include <string>

int main() {

	unsigned char* codearray[] = new unsigned char[10];

	codearray[0] = {'1', '2', '3', '4', '5'};


	delete[] codearray;
	

	return 0;
}
