#ifndef INCLUDED_cpp_Lib
#define INCLUDED_cpp_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Lib)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace cpp{


class HXCPP_CLASS_ATTRIBUTES  Lib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="cpp.Lib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Lib","\x25","\x07","\x3a","\x00"); }

		static Dynamic load( ::String lib,::String prim,int nargs);
		static Dynamic load_dyn();

		static int unloadAllLibraries( );
		static Dynamic unloadAllLibraries_dyn();

		static Dynamic _loadPrime( ::String lib,::String prim,::String signature,hx::Null< bool >  quietFail);
		static Dynamic _loadPrime_dyn();

		static Dynamic loadLazy( ::String lib,::String prim,int nargs);
		static Dynamic loadLazy_dyn();

		static Void rethrow( Dynamic inExp);
		static Dynamic rethrow_dyn();

		static ::String stringReference( ::haxe::io::Bytes inBytes);
		static Dynamic stringReference_dyn();

		static Void pushDllSearchPath( ::String inPath);
		static Dynamic pushDllSearchPath_dyn();

		static ::String getDllExtension( );
		static Dynamic getDllExtension_dyn();

		static ::String getBinDirectory( );
		static Dynamic getBinDirectory_dyn();

		static ::haxe::io::Bytes bytesReference( ::String s);
		static Dynamic bytesReference_dyn();

		static Void print( Dynamic v);
		static Dynamic print_dyn();

		static Dynamic haxeToNeko( Dynamic v);
		static Dynamic haxeToNeko_dyn();

		static Dynamic nekoToHaxe( Dynamic v);
		static Dynamic nekoToHaxe_dyn();

		static Void println( Dynamic v);
		static Dynamic println_dyn();

		static Void setFloatFormat( ::String inFormat);
		static Dynamic setFloatFormat_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Lib */ 
