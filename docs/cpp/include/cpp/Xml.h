#ifndef INCLUDED_cpp_Xml
#define INCLUDED_cpp_Xml

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS0(Type)
HX_DECLARE_CLASS1(cpp,Xml)
HX_DECLARE_CLASS1(cpp,XmlType)
namespace cpp{


class HXCPP_CLASS_ATTRIBUTES  Xml_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Xml_obj OBJ_;
		Xml_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="cpp.Xml")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Xml_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Xml_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Xml","\xb7","\x25","\x43","\x00"); }

		static void __boot();
		static ::cpp::XmlType Element;
		static ::cpp::XmlType PCData;
		static ::cpp::XmlType CData;
		static ::cpp::XmlType Comment;
		static ::cpp::XmlType DocType;
		static ::cpp::XmlType ProcessingInstruction;
		static ::cpp::XmlType Document;
		static Dynamic _parse;
		static Dynamic &_parse_dyn() { return _parse;}
		static ::cpp::Xml parse( ::String str);
		static Dynamic parse_dyn();

		static ::cpp::Xml createElement( ::String name);
		static Dynamic createElement_dyn();

		static ::cpp::Xml createPCData( ::String data);
		static Dynamic createPCData_dyn();

		static ::cpp::Xml createCData( ::String data);
		static Dynamic createCData_dyn();

		static ::cpp::Xml createComment( ::String data);
		static Dynamic createComment_dyn();

		static ::cpp::Xml createDocType( ::String data);
		static Dynamic createDocType_dyn();

		static ::cpp::Xml createProcessingInstruction( ::String data);
		static Dynamic createProcessingInstruction_dyn();

		static ::cpp::Xml createDocument( );
		static Dynamic createDocument_dyn();

		::String _nodeName;
		::String _nodeValue;
		Dynamic _attributes;
		Array< ::Dynamic > _children;
		::cpp::Xml _parent;
		::cpp::XmlType nodeType;
		virtual ::String get_nodeName( );
		Dynamic get_nodeName_dyn();

		virtual ::String set_nodeName( ::String n);
		Dynamic set_nodeName_dyn();

		virtual ::String get_nodeValue( );
		Dynamic get_nodeValue_dyn();

		virtual ::String set_nodeValue( ::String v);
		Dynamic set_nodeValue_dyn();

		::cpp::Xml parent;
		virtual ::cpp::Xml get_parent( );
		Dynamic get_parent_dyn();

		virtual ::String get( ::String att);
		Dynamic get_dyn();

		virtual Void set( ::String att,::String value);
		Dynamic set_dyn();

		virtual Void remove( ::String att);
		Dynamic remove_dyn();

		virtual bool exists( ::String att);
		Dynamic exists_dyn();

		virtual Dynamic attributes( );
		Dynamic attributes_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Dynamic elements( );
		Dynamic elements_dyn();

		virtual Dynamic elementsNamed( ::String name);
		Dynamic elementsNamed_dyn();

		virtual ::cpp::Xml firstChild( );
		Dynamic firstChild_dyn();

		virtual ::cpp::Xml firstElement( );
		Dynamic firstElement_dyn();

		virtual Void addChild( ::cpp::Xml x);
		Dynamic addChild_dyn();

		virtual bool removeChild( ::cpp::Xml x);
		Dynamic removeChild_dyn();

		virtual Void insertChild( ::cpp::Xml x,int pos);
		Dynamic insertChild_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void toStringRec( ::StringBuf s);
		Dynamic toStringRec_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Xml */ 
