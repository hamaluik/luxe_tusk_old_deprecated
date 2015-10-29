#ifndef INCLUDED_haxe_macro_Printer
#define INCLUDED_haxe_macro_Printer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Access)
HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,Constant)
HX_DECLARE_CLASS2(haxe,macro,Printer)
HX_DECLARE_CLASS2(haxe,macro,TypeParam)
HX_DECLARE_CLASS2(haxe,macro,Unop)
namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  Printer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Printer_obj OBJ_;
		Printer_obj();
		Void __construct(::String __o_tabString);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.macro.Printer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Printer_obj > __new(::String __o_tabString);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Printer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Printer","\xba","\xfd","\x84","\x51"); }

		::String tabs;
		::String tabString;
		virtual ::String printUnop( ::haxe::macro::Unop op);
		Dynamic printUnop_dyn();

		virtual ::String printBinop( ::haxe::macro::Binop op);
		Dynamic printBinop_dyn();

		virtual ::String escapeString( ::String s,::String delim);
		Dynamic escapeString_dyn();

		virtual ::String printFormatString( ::String s);
		Dynamic printFormatString_dyn();

		virtual ::String printString( ::String s);
		Dynamic printString_dyn();

		virtual ::String printConstant( ::haxe::macro::Constant c);
		Dynamic printConstant_dyn();

		virtual ::String printTypeParam( ::haxe::macro::TypeParam param);
		Dynamic printTypeParam_dyn();

		virtual ::String printTypePath( Dynamic tp);
		Dynamic printTypePath_dyn();

		virtual ::String printComplexType( ::haxe::macro::ComplexType ct);
		Dynamic printComplexType_dyn();

		virtual ::String printMetadata( Dynamic meta);
		Dynamic printMetadata_dyn();

		virtual ::String printAccess( ::haxe::macro::Access access);
		Dynamic printAccess_dyn();

		virtual ::String printField( Dynamic field);
		Dynamic printField_dyn();

		virtual ::String printTypeParamDecl( Dynamic tpd);
		Dynamic printTypeParamDecl_dyn();

		virtual ::String printFunctionArg( Dynamic arg);
		Dynamic printFunctionArg_dyn();

		virtual ::String printFunction( Dynamic func);
		Dynamic printFunction_dyn();

		virtual ::String printVar( Dynamic v);
		Dynamic printVar_dyn();

		virtual ::String printExpr( Dynamic e);
		Dynamic printExpr_dyn();

		virtual ::String printExprs( cpp::ArrayBase el,::String sep);
		Dynamic printExprs_dyn();

		virtual ::String printExtension( cpp::ArrayBase tpl,cpp::ArrayBase fields);
		Dynamic printExtension_dyn();

		virtual ::String printStructure( cpp::ArrayBase fields);
		Dynamic printStructure_dyn();

		virtual ::String printTypeDefinition( Dynamic t,hx::Null< bool >  printPackage);
		Dynamic printTypeDefinition_dyn();

		virtual ::String opt( Dynamic v,Dynamic f,::String prefix);
		Dynamic opt_dyn();

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Printer */ 
