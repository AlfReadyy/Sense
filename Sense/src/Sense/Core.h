#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define SENSE_API __declspec(dllexport)
	#else
		#define SENSE_API __declspec(dllimport)
	#endif
#else
	#error Sense only supports Windows!
#endif