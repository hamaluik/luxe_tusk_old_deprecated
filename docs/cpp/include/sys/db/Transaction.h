#ifndef INCLUDED_sys_db_Transaction
#define INCLUDED_sys_db_Transaction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,Transaction)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Transaction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transaction_obj OBJ_;
		Transaction_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.db.Transaction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Transaction_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transaction_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Transaction","\xbe","\xf9","\xb4","\x2f"); }

		static bool isDeadlock( Dynamic e);
		static Dynamic isDeadlock_dyn();

		static Void runMainLoop( Dynamic mainFun,Dynamic logError,int count);
		static Dynamic runMainLoop_dyn();

		static Void main( ::sys::db::Connection cnx,Dynamic mainFun,Dynamic logError);
		static Dynamic main_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Transaction */ 
