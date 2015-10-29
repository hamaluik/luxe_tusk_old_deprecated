#ifndef INCLUDED_sys_io_FileInput
#define INCLUDED_sys_io_FileInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(sys,io,FileInput)
HX_DECLARE_CLASS2(sys,io,FileSeek)
namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  FileInput_obj : public ::haxe::io::Input_obj{
	public:
		typedef ::haxe::io::Input_obj super;
		typedef FileInput_obj OBJ_;
		FileInput_obj();
		Void __construct(Dynamic f);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.io.FileInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FileInput_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FileInput","\xce","\x43","\x18","\x62"); }

		static void __boot();
		static Dynamic file_eof;
		static Dynamic &file_eof_dyn() { return file_eof;}
		static Dynamic file_read;
		static Dynamic &file_read_dyn() { return file_read;}
		static Dynamic file_read_char;
		static Dynamic &file_read_char_dyn() { return file_read_char;}
		static Dynamic file_close;
		static Dynamic &file_close_dyn() { return file_close;}
		static Dynamic file_seek;
		static Dynamic &file_seek_dyn() { return file_seek;}
		static Dynamic file_tell;
		static Dynamic &file_tell_dyn() { return file_tell;}
		Dynamic __f;
		virtual int readByte( );

		virtual int readBytes( ::haxe::io::Bytes s,int p,int l);

		virtual Void close( );

		virtual Void seek( int p,::sys::io::FileSeek pos);
		Dynamic seek_dyn();

		virtual int tell( );
		Dynamic tell_dyn();

		virtual bool eof( );
		Dynamic eof_dyn();

};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_FileInput */ 
