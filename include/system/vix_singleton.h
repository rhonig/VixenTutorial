#ifndef VIX_SINGLETON_H
#define VIX_SINGLETON_H

namespace Vixen{

	template <typename T>
	class Singleton
	{

	public:
		static T& instance(){

			static T _instance;

			return _instance;
		}

	protected:
		explicit Singleton<T>(){}
	};

}

#endif