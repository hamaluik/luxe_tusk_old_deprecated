#ifndef INCLUDED_haxe_zip_Reader
#define INCLUDED_haxe_zip_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,zip,Reader)
namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES  Reader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();
		Void __construct(::haxe::io::Input i);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.zip.Reader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Reader_obj > __new(::haxe::io::Input i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Reader","\x63","\x19","\x26","\x31"); }

		static ::List readZip( ::haxe::io::Input i);
		static Dynamic readZip_dyn();

		static ::haxe::io::Bytes unzip( Dynamic f);
		static Dynamic unzip_dyn();

		::haxe::io::Input i;
		virtual ::Date readZipDate( );
		Dynamic readZipDate_dyn();

		virtual ::List readExtraFields( int length);
		Dynamic readExtraFields_dyn();

		virtual Dynamic readEntryHeader( );
		Dynamic readEntryHeader_dyn();

		virtual ::List read( );
		Dynamic read_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_Reader */ 
