#ifndef INCLUDED_haxe_zip_Writer
#define INCLUDED_haxe_zip_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(haxe,zip,Writer)
namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES  Writer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();
		Void __construct(::haxe::io::Output o);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.zip.Writer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Writer_obj > __new(::haxe::io::Output o);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Writer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Writer","\xd3","\x4a","\x7a","\xb2"); }

		static void __boot();
		static int CENTRAL_DIRECTORY_RECORD_FIELDS_SIZE;
		static int LOCAL_FILE_HEADER_FIELDS_SIZE;
		::haxe::io::Output o;
		::List files;
		virtual Void writeZipDate( ::Date date);
		Dynamic writeZipDate_dyn();

		virtual Void writeEntryHeader( Dynamic f);
		Dynamic writeEntryHeader_dyn();

		virtual Void write( ::List files);
		Dynamic write_dyn();

		virtual Void writeCDR( );
		Dynamic writeCDR_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_Writer */ 
