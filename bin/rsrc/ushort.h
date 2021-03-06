class ushort
{
	rd2 m_in

	~ushort()
	{
	}

	ushort()
	{
	}

	ushort(ushort& a)
	{
		mov esi,this
		mov edi,a
		mov1 [esi],[edi]
		mov1 [esi+1],[edi+1]
	}

	ushort(ushort a)
	{
		mov esi,this
		mov1 [esi],a
		mov1 [esi+1],[ebp+(s_off a+1)]
	}
	
	short toshort()
	{
		mov esi,this
		mov1 s_ret,[esi]
		mov1 [ebp+(s_off s_ret+1)],[esi+1]
	}

	int toint()
	{
		mov esi,this
		mov s_ret,0
		mov1 s_ret,[esi]
		mov1 [ebp+(s_off s_ret+1)],[esi+1]
	}

	uint touint()
	{
		mov esi,this
		mov s_ret,0
		mov1 s_ret,[esi]
		mov1 [ebp+(s_off s_ret+1)],[esi+1]
	}

	rstr torstr()
	{
		rstr ret(this.toint)
		return ret
	}

	operator=(ushort& a)
	{
		mov esi,this
		mov edi,a
		mov1 [esi],[edi]
		mov1 [esi+1],[edi+1]
	}

	operator=(ushort a)
	{
		mov esi,this
		mov1 [esi],a
		mov1 [esi+1],[ebp+(s_off a+1)]
	}
	
	operator=(int a)
	{
		mov esi,this
		mov1 [esi],a
		mov1 [esi+1],[ebp+(s_off a+1)]
	}

	operator=(uint a)
	{
		mov esi,this
		mov1 [esi],a
		mov1 [esi+1],[ebp+(s_off a+1)]
	}

	operator++()
	{
		this=toint+1
	}

	operator--()
	{
		this=toint-1
	}

	friend operator<->(ushort& a,ushort& b)
	{
		c=a
		a=b
		b=c
	}

	friend bool operator==(ushort a,ushort b)
	{
		return a.toint==b.toint
	}

	friend bool operator!=(ushort a,ushort b)
	{
		return a.toint!=b.toint
	}

	friend bool operator>(ushort a,ushort b)
	{
		return a.toint>b.toint
	}

	friend bool operator>=(ushort a,ushort b)
	{
		return a.toint>=b.toint
	}

	friend bool operator<(ushort a,ushort b)
	{
		return a.toint<b.toint
	}

	friend bool operator<=(ushort a,ushort b)
	{
		return a.toint<=b.toint
	}

	clear()
	{
		this=0
	}

	bool empty()
	{
		return this.toint==0
	}

	print()
	{
		rf.print this.torstr
	}

	printl()
	{
		rf.printl this.torstr
	}
}