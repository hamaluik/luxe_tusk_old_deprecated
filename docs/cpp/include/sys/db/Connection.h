#ifndef INCLUDED_sys_db_Connection
#define INCLUDED_sys_db_Connection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Connection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Connection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::sys::db::ResultSet request( ::String s)=0;
virtual Dynamic request_dyn()=0;
		virtual Void close( )=0;
virtual Dynamic close_dyn()=0;
		virtual ::String escape( ::String s)=0;
virtual Dynamic escape_dyn()=0;
		virtual ::String quote( ::String s)=0;
virtual Dynamic quote_dyn()=0;
		virtual Void addValue( ::StringBuf s,Dynamic v)=0;
virtual Dynamic addValue_dyn()=0;
		virtual int lastInsertId( )=0;
virtual Dynamic lastInsertId_dyn()=0;
		virtual ::String dbName( )=0;
virtual Dynamic dbName_dyn()=0;
		virtual Void startTransaction( )=0;
virtual Dynamic startTransaction_dyn()=0;
		virtual Void commit( )=0;
virtual Dynamic commit_dyn()=0;
		virtual Void rollback( )=0;
virtual Dynamic rollback_dyn()=0;
};



template<typename IMPL>
class Connection_delegate_ : public Connection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Connection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::sys::db::ResultSet request( ::String s) { return mDelegate->request(s);}
		Dynamic request_dyn() { return mDelegate->request_dyn();}
		Void close( ) { return mDelegate->close();}
		Dynamic close_dyn() { return mDelegate->close_dyn();}
		::String escape( ::String s) { return mDelegate->escape(s);}
		Dynamic escape_dyn() { return mDelegate->escape_dyn();}
		::String quote( ::String s) { return mDelegate->quote(s);}
		Dynamic quote_dyn() { return mDelegate->quote_dyn();}
		Void addValue( ::StringBuf s,Dynamic v) { return mDelegate->addValue(s,v);}
		Dynamic addValue_dyn() { return mDelegate->addValue_dyn();}
		int lastInsertId( ) { return mDelegate->lastInsertId();}
		Dynamic lastInsertId_dyn() { return mDelegate->lastInsertId_dyn();}
		::String dbName( ) { return mDelegate->dbName();}
		Dynamic dbName_dyn() { return mDelegate->dbName_dyn();}
		Void startTransaction( ) { return mDelegate->startTransaction();}
		Dynamic startTransaction_dyn() { return mDelegate->startTransaction_dyn();}
		Void commit( ) { return mDelegate->commit();}
		Dynamic commit_dyn() { return mDelegate->commit_dyn();}
		Void rollback( ) { return mDelegate->rollback();}
		Dynamic rollback_dyn() { return mDelegate->rollback_dyn();}
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Connection */ 
