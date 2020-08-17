#include <iostream>
using namespace std;

typedef struct Test
{
	int val1;
	unsigned char val2;
	char arr[];
};

void main(void) {
	Test *pTest = (Test*)malloc(sizeof(Test) + sizeof(char)*5);
	pTest->val2 = 1;
	strcpy(pTest->arr, "1232");
	cout << (unsigned int)pTest->arr[-1] << endl;
	unsigned int tmp = pTest->arr[-1];
	getchar();
}