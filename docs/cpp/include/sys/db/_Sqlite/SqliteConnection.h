#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#define INCLUDED_sys_db__Sqlite_SqliteConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Sqlite,SqliteConnection)
namespace sys{
namespace db{
namespace _Sqlite{


class HXCPP_CLASS_ATTRIBUTES  SqliteConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SqliteConnection_obj OBJ_;
		SqliteConnection_obj();
		Void __construct(::String file);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db._Sqlite.SqliteConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SqliteConnection_obj > __new(::String file);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sys::db::Connection_obj *();
		::String __ToString() const { return HX_HCSTRING("SqliteConnection","\x2a","\x20","\x03","\xa3"); }

		static void __boot();
		static Dynamic _encode;
		static Dynamic &_encode_dyn() { return _encode;}
		static Dynamic _connect;
		static Dynamic &_connect_dyn() { return _connect;}
		static Dynamic _close;
		static Dynamic &_close_dyn() { return _close;}
		static Dynamic _request;
		static Dynamic &_request_dyn() { return _request;}
		static Dynamic _last_id;
		static Dynamic &_last_id_dyn() { return _last_id;}
		Dynamic c;
		virtual Void close( );
		Dynamic close_dyn();

		virtual ::sys::db::ResultSet request( ::String s);
		Dynamic request_dyn();

		virtual ::String escape( ::String s);
		Dynamic escape_dyn();

		virtual ::String quote( ::String s);
		Dynamic quote_dyn();

		virtual Void addValue( ::StringBuf s,Dynamic v);
		Dynamic addValue_dyn();

		virtual int lastInsertId( );
		Dynamic lastInsertId_dyn();

		virtual ::String dbName( );
		Dynamic dbName_dyn();

		virtual Void startTransaction( );
		Dynamic startTransaction_dyn();

		virtual Void commit( );
		Dynamic commit_dyn();

		virtual Void rollback( );
		Dynamic rollback_dyn();

};

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite

#endif /* INCLUDED_sys_db__Sqlite_SqliteConnection */ 
