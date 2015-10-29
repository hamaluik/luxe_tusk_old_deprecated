#ifndef INCLUDED_sys_db_Object
#define INCLUDED_sys_db_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,Manager)
HX_DECLARE_CLASS2(sys,db,Object)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Object_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db.Object")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Object_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Object_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Object","\xdf","\xf2","\xd3","\x49"); }

		bool _lock;
		::sys::db::Manager _manager;
		Dynamic __cache__;
		virtual ::sys::db::Manager __getManager( );
		Dynamic __getManager_dyn();

		virtual Void insert( );
		Dynamic insert_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void _delete( );
		Dynamic _delete_dyn();

		virtual bool isLocked( );
		Dynamic isLocked_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Object */ 
