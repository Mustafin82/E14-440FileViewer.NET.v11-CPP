#include "E440ReadParams.h"

namespace e440native
{
	unsigned short int* paramsArrayDyn = new unsigned short int[66];
	int* paramsArrayDynInt = new int[66];

	int* getParamsCPPNative(const char* _filePathString)
	{
		cout << _filePathString << endl;
		ifstream ifs(_filePathString, ios::binary);
		ifs.read(reinterpret_cast<char*> (paramsArrayDyn), 66 * sizeof(unsigned short int));
		for (int i = 0; i < 66; i++) {
			paramsArrayDynInt[i] = paramsArrayDyn[i];
		}

		return paramsArrayDynInt;
	}

	void paramsCPPNativeRelease(int* _paramsArrayDynInt)
	{
		delete[] paramsArrayDyn;
		delete[] paramsArrayDynInt;
	} 
}