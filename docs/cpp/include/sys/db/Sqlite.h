#ifndef INCLUDED_sys_db_Sqlite
#define INCLUDED_sys_db_Sqlite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,Sqlite)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Sqlite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sqlite_obj OBJ_;
		Sqlite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.db.Sqlite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sqlite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sqlite_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sqlite","\xec","\x9c","\x99","\x87"); }

		static ::sys::db::Connection open( ::String file);
		static Dynamic open_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Sqlite */ 
