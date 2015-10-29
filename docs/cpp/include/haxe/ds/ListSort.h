#ifndef INCLUDED_haxe_ds_ListSort
#define INCLUDED_haxe_ds_ListSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,ListSort)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  ListSort_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ListSort_obj OBJ_;
		ListSort_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ds.ListSort")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ListSort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListSort_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ListSort","\xfc","\xb2","\xfe","\x05"); }

		static Dynamic sort( Dynamic list,Dynamic cmp);
		static Dynamic sort_dyn();

		static Dynamic sortSingleLinked( Dynamic list,Dynamic cmp);
		static Dynamic sortSingleLinked_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_ListSort */ 
