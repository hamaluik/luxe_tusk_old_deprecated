#ifndef INCLUDED_haxe_rtti_XmlParser
#define INCLUDED_haxe_rtti_XmlParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,rtti,CType)
HX_DECLARE_CLASS2(haxe,rtti,Rights)
HX_DECLARE_CLASS2(haxe,rtti,TypeTree)
HX_DECLARE_CLASS2(haxe,rtti,XmlParser)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace haxe{
namespace rtti{


class HXCPP_CLASS_ATTRIBUTES  XmlParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XmlParser_obj OBJ_;
		XmlParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.rtti.XmlParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XmlParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XmlParser_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("XmlParser","\xf6","\xd9","\xa1","\x8a"); }

		Array< ::Dynamic > root;
		::String curplatform;
		virtual Void sort( Array< ::Dynamic > l);
		Dynamic sort_dyn();

		virtual ::List sortFields( Dynamic fl);
		Dynamic sortFields_dyn();

		virtual Void process( ::Xml x,::String platform);
		Dynamic process_dyn();

		virtual bool mergeRights( Dynamic f1,Dynamic f2);
		Dynamic mergeRights_dyn();

		virtual bool mergeDoc( Dynamic f1,Dynamic f2);
		Dynamic mergeDoc_dyn();

		virtual bool mergeFields( Dynamic f,Dynamic f2);
		Dynamic mergeFields_dyn();

		Dynamic newField;
		inline Dynamic &newField_dyn() {return newField; }

		virtual bool mergeClasses( Dynamic c,Dynamic c2);
		Dynamic mergeClasses_dyn();

		virtual bool mergeEnums( Dynamic e,Dynamic e2);
		Dynamic mergeEnums_dyn();

		virtual bool mergeTypedefs( Dynamic t,Dynamic t2);
		Dynamic mergeTypedefs_dyn();

		virtual bool mergeAbstracts( Dynamic a,Dynamic a2);
		Dynamic mergeAbstracts_dyn();

		virtual Void merge( ::haxe::rtti::TypeTree t);
		Dynamic merge_dyn();

		virtual ::String mkPath( ::String p);
		Dynamic mkPath_dyn();

		virtual Array< ::String > mkTypeParams( ::String p);
		Dynamic mkTypeParams_dyn();

		virtual ::haxe::rtti::Rights mkRights( ::String r);
		Dynamic mkRights_dyn();

		virtual Dynamic xerror( ::haxe::xml::Fast c);
		Dynamic xerror_dyn();

		virtual Void xroot( ::haxe::xml::Fast x);
		Dynamic xroot_dyn();

		virtual ::haxe::rtti::TypeTree processElement( ::Xml x);
		Dynamic processElement_dyn();

		virtual cpp::ArrayBase xmeta( ::haxe::xml::Fast x);
		Dynamic xmeta_dyn();

		virtual ::List xoverloads( ::haxe::xml::Fast x);
		Dynamic xoverloads_dyn();

		virtual Dynamic xpath( ::haxe::xml::Fast x);
		Dynamic xpath_dyn();

		virtual Dynamic xclass( ::haxe::xml::Fast x);
		Dynamic xclass_dyn();

		virtual Dynamic xclassfield( ::haxe::xml::Fast x,Dynamic defPublic);
		Dynamic xclassfield_dyn();

		virtual Dynamic xenum( ::haxe::xml::Fast x);
		Dynamic xenum_dyn();

		virtual Dynamic xenumfield( ::haxe::xml::Fast x);
		Dynamic xenumfield_dyn();

		virtual Dynamic xabstract( ::haxe::xml::Fast x);
		Dynamic xabstract_dyn();

		virtual Dynamic xtypedef( ::haxe::xml::Fast x);
		Dynamic xtypedef_dyn();

		virtual ::haxe::rtti::CType xtype( ::haxe::xml::Fast x);
		Dynamic xtype_dyn();

		virtual ::List xtypeparams( ::haxe::xml::Fast x);
		Dynamic xtypeparams_dyn();

		virtual ::List defplat( );
		Dynamic defplat_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_XmlParser */ 
