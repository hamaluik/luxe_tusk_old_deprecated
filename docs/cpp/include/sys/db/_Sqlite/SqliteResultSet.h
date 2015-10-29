#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#define INCLUDED_sys_db__Sqlite_SqliteResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Sqlite,SqliteResultSet)
namespace sys{
namespace db{
namespace _Sqlite{


class HXCPP_CLASS_ATTRIBUTES  SqliteResultSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SqliteResultSet_obj OBJ_;
		SqliteResultSet_obj();
		Void __construct(Dynamic r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db._Sqlite.SqliteResultSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SqliteResultSet_obj > __new(Dynamic r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteResultSet_obj();

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
		operator ::sys::db::ResultSet_obj *();
		::String __ToString() const { return HX_HCSTRING("SqliteResultSet","\x39","\x58","\x4c","\xf7"); }

		static void __boot();
		static Dynamic result_next;
		static Dynamic &result_next_dyn() { return result_next;}
		static Dynamic result_get_length;
		static Dynamic &result_get_length_dyn() { return result_get_length;}
		static Dynamic result_get_nfields;
		static Dynamic &result_get_nfields_dyn() { return result_get_nfields;}
		static Dynamic result_get;
		static Dynamic &result_get_dyn() { return result_get;}
		static Dynamic result_get_int;
		static Dynamic &result_get_int_dyn() { return result_get_int;}
		static Dynamic result_get_float;
		static Dynamic &result_get_float_dyn() { return result_get_float;}
		int length;
		int nfields;
		Dynamic r;
		::List cache;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int get_nfields( );
		Dynamic get_nfields_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual ::List results( );
		Dynamic results_dyn();

		virtual ::String getResult( int n);
		Dynamic getResult_dyn();

		virtual int getIntResult( int n);
		Dynamic getIntResult_dyn();

		virtual Float getFloatResult( int n);
		Dynamic getFloatResult_dyn();

		virtual Array< ::String > getFieldsNames( );
		Dynamic getFieldsNames_dyn();

};

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite

#endif /* INCLUDED_sys_db__Sqlite_SqliteResultSet */ 
