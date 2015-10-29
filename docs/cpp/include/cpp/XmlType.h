#ifndef INCLUDED_cpp_XmlType
#define INCLUDED_cpp_XmlType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,XmlType)
namespace cpp{


class XmlType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef XmlType_obj OBJ_;

	public:
		XmlType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("cpp.XmlType","\xc6","\x49","\xb6","\xce"); }
		::String __ToString() const { return HX_HCSTRING("XmlType.","\xfd","\xa2","\x7e","\x3a") + tag; }

};

} // end namespace cpp

#endif /* INCLUDED_cpp_XmlType */ 
