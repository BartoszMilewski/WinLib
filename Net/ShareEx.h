#if !defined (SHARE_EX)
#define SHARE_EX
//---------------------------
// (c) Reliable Software 2000
//---------------------------

namespace Net
{
	class ShareException
	{
	public:
		ShareException (int errCode, char const * msg)
			: _errCode (errCode), _msg (msg)
		{}

		int GetError () const { return _errCode; }
		char const * GetMessage () const { return _msg; }
		char const * GetReason () const;

	private:
		int			 _errCode;
		char const * _msg;
	};
}
#endif
