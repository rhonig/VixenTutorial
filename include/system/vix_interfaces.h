#ifndef VIX_INTERFACES_H
#define VIX_INTERFACES_H

#include <vix_platform.h>

namespace Vixen {

	class VIX_API INonCopyable
	{
	public:
		

	protected:
		INonCopyable() {

		}
		~INonCopyable() {

		}

	private:
		INonCopyable(const INonCopyable& other);
		const INonCopyable& operator = (const INonCopyable& other);
	};

	

}


#endif