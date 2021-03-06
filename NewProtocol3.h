// {{{RME classifier 'Logical View::NewProtocol3'

#ifndef NewProtocol3_H
#define NewProtocol3_H

#ifdef PRAGMA
#pragma interface "NewProtocol3.h"
#endif

#include <RTSystem/TestComponent.h>

struct NewProtocol3
{
	class Base : public RTRootProtocol
	{
	public:
		inline Base( void );
		inline ~Base( void );

	protected:
		enum { rtiLast_NewProtocol3 = rtiLast_RTRootProtocol };

	public:
		static const RTProtocolDescriptor rt_class;

	private:
		static const RTSignalDescriptor rt_signals[];
	};
	class Conjugate : public RTRootProtocol
	{
	public:
		inline Conjugate( void );
		inline ~Conjugate( void );

	protected:
		enum { rtiLast_NewProtocol3 = rtiLast_RTRootProtocol };

	public:
		static const RTProtocolDescriptor rt_class;

	private:
		static const RTSignalDescriptor rt_signals[];
	};
};

inline NewProtocol3::Base::Base( void )
	: RTRootProtocol()
{
}

inline NewProtocol3::Base::~Base( void )
{
}

inline NewProtocol3::Conjugate::Conjugate( void )
	: RTRootProtocol()
{
}

inline NewProtocol3::Conjugate::~Conjugate( void )
{
}

#endif /* NewProtocol3_H */

// }}}RME
