#ifndef INCLUDED_sys_db__Mysql_MysqlConnection
#define INCLUDED_sys_db__Mysql_MysqlConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Mysql,MysqlConnection)
namespace sys{
namespace db{
namespace _Mysql{


class HXCPP_CLASS_ATTRIBUTES  MysqlConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MysqlConnection_obj OBJ_;
		MysqlConnection_obj();
		Void __construct(Dynamic c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db._Mysql.MysqlConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MysqlConnection_obj > __new(Dynamic c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MysqlConnection_obj();

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
		::String __ToString() const { return HX_HCSTRING("MysqlConnection","\xc0","\x1c","\x2c","\x78"); }

		static void __boot();
		static Dynamic __use_date;
		Dynamic __c;
		virtual ::sys::db::ResultSet request( ::String s);
		Dynamic request_dyn();

		virtual Void close( );
		Dynamic close_dyn();

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
} // end namespace _Mysql

#endif /* INCLUDED_sys_db__Mysql_MysqlConnection */ 
