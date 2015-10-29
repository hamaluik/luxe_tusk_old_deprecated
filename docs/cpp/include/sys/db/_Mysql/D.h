#ifndef INCLUDED_sys_db__Mysql_D
#define INCLUDED_sys_db__Mysql_D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(sys,db,_Mysql,D)
namespace sys{
namespace db{
namespace _Mysql{


class HXCPP_CLASS_ATTRIBUTES  D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef D_obj OBJ_;
		D_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sys.db._Mysql.D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~D_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("D","\x44","\x00","\x00","\x00"); }

		static void __boot();
		static Dynamic load( ::String fun,int args);
		static Dynamic load_dyn();

		static ::String lib;
		static Dynamic connect;
		static Dynamic &connect_dyn() { return connect;}
		static Dynamic select_db;
		static Dynamic &select_db_dyn() { return select_db;}
		static Dynamic request;
		static Dynamic &request_dyn() { return request;}
		static Dynamic close;
		static Dynamic &close_dyn() { return close;}
		static Dynamic escape;
		static Dynamic &escape_dyn() { return escape;}
		static Dynamic set_conv_funs;
		static Dynamic &set_conv_funs_dyn() { return set_conv_funs;}
		static Dynamic result_get_length;
		static Dynamic &result_get_length_dyn() { return result_get_length;}
		static Dynamic result_get_nfields;
		static Dynamic &result_get_nfields_dyn() { return result_get_nfields;}
		static Dynamic result_next;
		static Dynamic &result_next_dyn() { return result_next;}
		static Dynamic result_get;
		static Dynamic &result_get_dyn() { return result_get;}
		static Dynamic result_get_int;
		static Dynamic &result_get_int_dyn() { return result_get_int;}
		static Dynamic result_get_float;
		static Dynamic &result_get_float_dyn() { return result_get_float;}
		static Dynamic result_fields_names;
		static Dynamic &result_fields_names_dyn() { return result_fields_names;}
};

} // end namespace sys
} // end namespace db
} // end namespace _Mysql

#endif /* INCLUDED_sys_db__Mysql_D */ 
