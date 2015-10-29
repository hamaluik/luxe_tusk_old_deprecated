#ifndef INCLUDED_sys_db_ResultSet
#define INCLUDED_sys_db_ResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  ResultSet_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ResultSet_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_length( )=0;
virtual Dynamic get_length_dyn()=0;
		virtual int get_nfields( )=0;
virtual Dynamic get_nfields_dyn()=0;
		virtual bool hasNext( )=0;
virtual Dynamic hasNext_dyn()=0;
		virtual Dynamic next( )=0;
virtual Dynamic next_dyn()=0;
		virtual ::List results( )=0;
virtual Dynamic results_dyn()=0;
		virtual ::String getResult( int n)=0;
virtual Dynamic getResult_dyn()=0;
		virtual int getIntResult( int n)=0;
virtual Dynamic getIntResult_dyn()=0;
		virtual Float getFloatResult( int n)=0;
virtual Dynamic getFloatResult_dyn()=0;
		virtual Array< ::String > getFieldsNames( )=0;
virtual Dynamic getFieldsNames_dyn()=0;
};



template<typename IMPL>
class ResultSet_delegate_ : public ResultSet_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ResultSet_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_length( ) { return mDelegate->get_length();}
		Dynamic get_length_dyn() { return mDelegate->get_length_dyn();}
		int get_nfields( ) { return mDelegate->get_nfields();}
		Dynamic get_nfields_dyn() { return mDelegate->get_nfields_dyn();}
		bool hasNext( ) { return mDelegate->hasNext();}
		Dynamic hasNext_dyn() { return mDelegate->hasNext_dyn();}
		Dynamic next( ) { return mDelegate->next();}
		Dynamic next_dyn() { return mDelegate->next_dyn();}
		::List results( ) { return mDelegate->results();}
		Dynamic results_dyn() { return mDelegate->results_dyn();}
		::String getResult( int n) { return mDelegate->getResult(n);}
		Dynamic getResult_dyn() { return mDelegate->getResult_dyn();}
		int getIntResult( int n) { return mDelegate->getIntResult(n);}
		Dynamic getIntResult_dyn() { return mDelegate->getIntResult_dyn();}
		Float getFloatResult( int n) { return mDelegate->getFloatResult(n);}
		Dynamic getFloatResult_dyn() { return mDelegate->getFloatResult_dyn();}
		Array< ::String > getFieldsNames( ) { return mDelegate->getFieldsNames();}
		Dynamic getFieldsNames_dyn() { return mDelegate->getFieldsNames_dyn();}
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_ResultSet */ 
