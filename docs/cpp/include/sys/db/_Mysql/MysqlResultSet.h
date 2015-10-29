#ifndef INCLUDED_sys_db__Mysql_MysqlResultSet
#define INCLUDED_sys_db__Mysql_MysqlResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Mysql,MysqlResultSet)
namespace sys{
namespace db{
namespace _Mysql{


class HXCPP_CLASS_ATTRIBUTES  MysqlResultSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MysqlResultSet_obj OBJ_;
		MysqlResultSet_obj();
		Void __construct(Dynamic r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db._Mysql.MysqlResultSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MysqlResultSet_obj > __new(Dynamic r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MysqlResultSet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sys::db::ResultSet_obj *();
		::String __ToString() const { return HX_HCSTRING("MysqlResultSet","\x63","\x80","\x06","\x25"); }

		int length;
		int nfields;
		Dynamic __r;
		Dynamic cache;
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
} // end namespace _Mysql

#endif /* INCLUDED_sys_db__Mysql_MysqlResultSet */ 
