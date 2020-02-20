#include "E440ReadParams.h"

//namespace e440native
//{
	

	//unsigned short int* getParamsCPPNative(const char* _filePathString)
unsigned short int * getParamsCPPNative(const char* _filePathString)
	{
		unsigned short int * paramsArrayDyn = new unsigned short int[66];
		
		//unsigned short int paramsArray[66];

		//errno_t err = 0;

		//FILE *paramsFile;
		//err = fopen_s(&paramsFile, _filePathString, "rb");
		
		//FILE *paramsFile = fopen(_filePathString, "rb");

		/*if(paramsFile == NULL || err != 0)
		{
			printf("File open error!\n");
			return NULL;
		}
		else
		{
			printf("Hello!\n");

			//if (fread_s(&paramsArray, 66 * sizeof(unsigned short int), sizeof(unsigned short int), 66, paramsFile))
			//if (fread(&paramsArray, sizeof(unsigned short int), 66, paramsFile))
			{
				return paramsArray;
			}
			else
			{
				printf("File read error!\n");
				return NULL;
			}
		}*/

		ifstream ifs(_filePathString, ios::binary);
		ifs.read(reinterpret_cast<char*> (paramsArrayDyn), 66 * sizeof(unsigned short int));

		return paramsArrayDyn;
	}

	void paramsCPPNativeRelease(unsigned short int * _paramsArray)
	{
		delete[] _paramsArray;
	} 

	void main()
	{
		int * paramsArrayDynInt = new int[66];
		//unsigned short int* paramsArray = getParamsCPPNative("D:/Temp/10f.prm");
		unsigned short int * paramsArray = getParamsCPPNative("C:\\Users\\student\\source\\repos\\E14-440FileViewer.NET.v10\\data\\10f.prm");
		for (int i = 0; i < 66; i++) {
			paramsArrayDynInt[i] = paramsArray[i];
			//cout << paramsArray[i] << endl;
		}

		for (int i = 0; i < 66; i++) {
			cout << paramsArrayDynInt[i] << endl;
		}

		paramsCPPNativeRelease(paramsArray);
	}
//}