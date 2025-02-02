#include <Aurora/Threads/unix/MutexImpl.hpp>

namespace Aurora
{
	namespace Threads
	{
		namespace priv
		{
			////////////////////////////////////////////////////////////
			MutexImpl::MutexImpl()
			{
				// Make it recursive to follow the expected behaviour
				/*pthread_mutexattr_t attributes;
				pthread_mutexattr_init(&attributes);
				pthread_mutexattr_settype(&attributes, PTHREAD_MUTEX_RECURSIVE);

				pthread_mutex_init(&m_mutex, &attributes);*/
				pthread_mutex_init(&m_mutex, NULL);
			}


			////////////////////////////////////////////////////////////
			MutexImpl::~MutexImpl()
			{
				pthread_mutex_destroy(&m_mutex);
			}


			////////////////////////////////////////////////////////////
			void MutexImpl::lock()
			{
				pthread_mutex_lock(&m_mutex);
			}


			////////////////////////////////////////////////////////////
			void MutexImpl::unlock()
			{
				pthread_mutex_unlock(&m_mutex);
			}

		} // namespace priv

	} // namespace sf
}