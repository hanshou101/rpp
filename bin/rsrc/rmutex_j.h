//互斥体尽量使用静态函数
class rmutex
{
	char m_mutex[24]
	
	static InitializeCriticalSection(void* p)
	{
		push p
		calle "InitializeCriticalSection"
	}
	
	static DeleteCriticalSection(void* p)
	{
		push p
		calle "DeleteCriticalSection"
	}
	
	static EnterCriticalSection(void* p)
	{
		push p
		calle "EnterCriticalSection"
	}
	
	static LeaveCriticalSection(void* p)
	{
		push p
		calle "LeaveCriticalSection"
	}
	
	~rmutex()
	{
		DeleteCriticalSection(&m_mutex)
	}
	
	rmutex()
	{
		InitializeCriticalSection(&m_mutex)
	}
	
	enter()
	{
		EnterCriticalSection(&m_mutex)
	}
	
	leave()
	{
		LeaveCriticalSection(&m_mutex)
	}
}
