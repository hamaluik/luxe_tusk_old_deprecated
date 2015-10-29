#ifndef INCLUDED_tusk_math_Matrix4x4
#define INCLUDED_tusk_math_Matrix4x4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Serializer)
HX_DECLARE_CLASS1(haxe,Unserializer)
HX_DECLARE_CLASS2(tusk,math,Matrix4x4)
namespace tusk{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Matrix4x4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix4x4_obj OBJ_;
		Matrix4x4_obj();
		Void __construct(Array< Float > array);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.math.Matrix4x4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix4x4_obj > __new(Array< Float > array);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix4x4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Matrix4x4","\x2f","\x26","\xaf","\x4f"); }

		Array< Float > buffer;
		virtual Float get( int x,int y);
		Dynamic get_dyn();

		virtual Void set( int x,int y,Float v);
		Dynamic set_dyn();

		virtual ::tusk::math::Matrix4x4 multiplyMatrix( ::tusk::math::Matrix4x4 B);
		Dynamic multiplyMatrix_dyn();

		virtual Void hxSerialize( ::haxe::Serializer s);
		Dynamic hxSerialize_dyn();

		virtual Void hxUnserialize( ::haxe::Unserializer u);
		Dynamic hxUnserialize_dyn();

};

} // end namespace tusk
} // end namespace math

#endif /* INCLUDED_tusk_math_Matrix4x4 */ 
