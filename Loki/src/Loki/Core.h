#pragma once

#ifdef LOKI_PLATFORM_WINDOWS

	#ifdef LOKI_BUILD_DLL
		#define LOKI_API __declspec(dllexport)
	#else
		#define LOKI_API __declspec(dllimport)
	#endif
#else
	#error Windows only application
#endif
