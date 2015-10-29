#ifndef INCLUDED_sys_db_TableCreate
#define INCLUDED_sys_db_TableCreate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Manager)
HX_DECLARE_CLASS2(sys,db,RecordType)
HX_DECLARE_CLASS2(sys,db,TableCreate)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  TableCreate_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TableCreate_obj OBJ_;
		TableCreate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.db.TableCreate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TableCreate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableCreate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TableCreate","\x8a","\xa9","\x80","\x1f"); }

		static ::String autoInc( ::String dbName);
		static Dynamic autoInc_dyn();

		static ::String getTypeSQL( ::sys::db::RecordType t,::String dbName);
		static Dynamic getTypeSQL_dyn();

		static Void create( ::sys::db::Manager manager,::String engine);
		static Dynamic create_dyn();

		static bool exists( ::sys::db::Manager manager);
		static Dynamic exists_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_TableCreate */ 
