#ifndef VIX_LOGMANAGER_H
#define VIX_LOGMANAGER_H

#include <vix_platform.h>
#include <vix_singleton.h>

namespace Vixen {

	class VIX_API LogManager : public Singleton <LogManager> {

		friend class Singleton <LogManager>;

	public:

	};

	extern LogManager& g_LogManager;

}

#endif // !VIX_LOGMANAGER_H

