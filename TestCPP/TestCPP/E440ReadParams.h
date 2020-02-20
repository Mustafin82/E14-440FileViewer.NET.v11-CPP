#include <stdexcept>
#include <fstream>
#include <iostream>

using namespace std;

namespace e440native
{
   /*extern "C" { __declspec(dllexport) unsigned short int * getParamsCPPNative(const char* _filePathString); }*/
	extern "C" { __declspec(dllexport) unsigned short int * getParamsCPPNative(const char* _filePathString); }
	extern "C" { __declspec(dllexport) void paramsCPPNativeRelease(unsigned short int * _paramsArray); }
}