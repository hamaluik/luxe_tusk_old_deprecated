#ifndef INCLUDED_sys_db_Mysql
#define INCLUDED_sys_db_Mysql

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,Mysql)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Mysql_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mysql_obj OBJ_;
		Mysql_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.db.Mysql")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mysql_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mysql_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mysql","\x02","\x22","\x2d","\xa6"); }

		static ::sys::db::Connection connect( Dynamic params);
		static Dynamic connect_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Mysql */ 
