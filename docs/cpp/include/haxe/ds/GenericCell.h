#ifndef INCLUDED_haxe_ds_GenericCell
#define INCLUDED_haxe_ds_GenericCell

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,GenericCell)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  GenericCell_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericCell_obj OBJ_;
		GenericCell_obj();
		Void __construct(Dynamic elt,::haxe::ds::GenericCell next);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.GenericCell")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GenericCell_obj > __new(Dynamic elt,::haxe::ds::GenericCell next);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericCell_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GenericCell","\x39","\xaf","\xfc","\x7c"); }

		Dynamic elt;
		::haxe::ds::GenericCell next;
};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_GenericCell */ 
