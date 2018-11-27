#pragma once

//Macros and Definitions
#ifdef Windows
	#ifdef PH_BUILD_DLL
		#define PH_API __declspec(dllexport)
	#else
		#define PH_API __declspec(dllimport)
	#endif // PH_BUILD_DLL
#else
	#error Phenome currently only supports Windows
#endif // Windows
