#ifndef VIX_PLATFORM_H
#define VIX_PLATFORM_H

//
// Note:
//
// Define pre-processor macros for DLL export import, and
// system macros
//

#ifdef _WIN32

	#define VIX_SYS_WINDOWS

	//define to disable <windows.h> from defining the min and max macros
	#ifndef NOMINMAX
	#define NOMINMAX
	#endif
#elif defined(__LINUX__)
#define VIX_SYS_LINUX
#elif define(__APPLE__)
#endif

#ifndef VIX_STATIC_BUILD
	#ifdef VIX_SYS_WINDOWS

		#ifdef VIX_NONCLIENT_BUILD
			#define VIX_API __declspec(dllexport)
		#else
			#define VIX_API __declspec(dllimport)
		#endif // !VIX_NONCLIENT_BUILD

		//Visual c++ compiler warming C4251 disable
		#ifdef _MSC_VER
			#pragma warning(disable : 4251)
		#endif // MSC_VER
	#else
		#ifdef __GNUC__ >=4
			#define VIX_API __attribute__ ((__visablity__("default")))
		#else
			#define VIX_API VIX_API
		#endif // __GNUC__ >=4


	#endif // VIX_SYS_WINDOWS

#else
	#define VIX_API VIX_API
#endif // !VIX_STATIC_BUILD



#endif

