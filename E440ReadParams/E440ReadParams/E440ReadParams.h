#include <stdexcept>
#include <fstream>
#include <iostream>

using namespace std;

namespace e440native
{
	extern "C" { __declspec(dllexport) int* getParamsCPPNative(const char* _filePathString); }
	extern "C" { __declspec(dllexport) void paramsCPPNativeRelease(int * _paramsArray); }
}