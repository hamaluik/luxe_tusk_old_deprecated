#ifndef INCLUDED_haxe_ds_GenericStack
#define INCLUDED_haxe_ds_GenericStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,GenericCell)
HX_DECLARE_CLASS2(haxe,ds,GenericStack)
namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  GenericStack_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericStack_obj OBJ_;
		GenericStack_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ds.GenericStack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GenericStack_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericStack_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GenericStack","\xd1","\xbd","\x67","\x20"); }

		::haxe::ds::GenericCell head;
		virtual Void add( Dynamic item);
		Dynamic add_dyn();

		virtual Dynamic first( );
		Dynamic first_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual bool remove( Dynamic v);
		Dynamic remove_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_GenericStack */ 
