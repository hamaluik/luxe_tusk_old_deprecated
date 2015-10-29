#ifndef INCLUDED_haxe_io_Bytes
#define INCLUDED_haxe_io_Bytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  Bytes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bytes_obj OBJ_;
		Bytes_obj();
		Void __construct(int length,Array< unsigned char > b);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.Bytes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bytes_obj > __new(int length,Array< unsigned char > b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bytes_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50"); }

		static ::haxe::io::Bytes alloc( int length);
		static Dynamic alloc_dyn();

		static ::haxe::io::Bytes ofString( ::String s);
		static Dynamic ofString_dyn();

		static ::haxe::io::Bytes ofData( Array< unsigned char > b);
		static Dynamic ofData_dyn();

		static int fastGet( Array< unsigned char > b,int pos);
		static Dynamic fastGet_dyn();

		int length;
		Array< unsigned char > b;
		virtual int get( int pos);
		Dynamic get_dyn();

		virtual Void set( int pos,int v);
		Dynamic set_dyn();

		virtual Void blit( int pos,::haxe::io::Bytes src,int srcpos,int len);
		Dynamic blit_dyn();

		virtual Void fill( int pos,int len,int value);
		Dynamic fill_dyn();

		virtual ::haxe::io::Bytes sub( int pos,int len);
		Dynamic sub_dyn();

		virtual int compare( ::haxe::io::Bytes other);
		Dynamic compare_dyn();

		virtual Float getDouble( int pos);
		Dynamic getDouble_dyn();

		virtual Float getFloat( int pos);
		Dynamic getFloat_dyn();

		virtual Void setDouble( int pos,Float v);
		Dynamic setDouble_dyn();

		virtual Void setFloat( int pos,Float v);
		Dynamic setFloat_dyn();

		virtual int getUInt16( int pos);
		Dynamic getUInt16_dyn();

		virtual Void setUInt16( int pos,int v);
		Dynamic setUInt16_dyn();

		virtual int getInt32( int pos);
		Dynamic getInt32_dyn();

		virtual cpp::Int64Struct getInt64( int pos);
		Dynamic getInt64_dyn();

		virtual Void setInt32( int pos,int v);
		Dynamic setInt32_dyn();

		virtual Void setInt64( int pos,cpp::Int64Struct v);
		Dynamic setInt64_dyn();

		virtual ::String getString( int pos,int len);
		Dynamic getString_dyn();

		virtual ::String readString( int pos,int len);
		Dynamic readString_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String toHex( );
		Dynamic toHex_dyn();

		virtual Array< unsigned char > getData( );
		Dynamic getData_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Bytes */ 
