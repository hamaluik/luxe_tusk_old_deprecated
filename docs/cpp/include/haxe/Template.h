#ifndef INCLUDED_haxe_Template
#define INCLUDED_haxe_Template

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,Template)
HX_DECLARE_CLASS2(haxe,_Template,TemplateExpr)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Template_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Template_obj OBJ_;
		Template_obj();
		Void __construct(::String str);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.Template")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Template_obj > __new(::String str);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Template_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Template","\x5a","\xa4","\xf9","\x85"); }

		static void __boot();
		static ::EReg splitter;
		static ::EReg expr_splitter;
		static ::EReg expr_trim;
		static ::EReg expr_int;
		static ::EReg expr_float;
		static Dynamic globals;
		::haxe::_Template::TemplateExpr expr;
		Dynamic context;
		Dynamic macros;
		::List stack;
		::StringBuf buf;
		virtual ::String execute( Dynamic context,Dynamic macros);
		Dynamic execute_dyn();

		virtual Dynamic resolve( ::String v);
		Dynamic resolve_dyn();

		virtual ::List parseTokens( ::String data);
		Dynamic parseTokens_dyn();

		virtual ::haxe::_Template::TemplateExpr parseBlock( ::List tokens);
		Dynamic parseBlock_dyn();

		virtual ::haxe::_Template::TemplateExpr parse( ::List tokens);
		Dynamic parse_dyn();

		virtual Dynamic parseExpr( ::String data);
		Dynamic parseExpr_dyn();

		virtual Dynamic makeConst( ::String v);
		Dynamic makeConst_dyn();

		virtual Dynamic makePath( Dynamic e,::List l);
		Dynamic makePath_dyn();

		virtual Dynamic makeExpr( ::List l);
		Dynamic makeExpr_dyn();

		virtual Dynamic makeExpr2( ::List l);
		Dynamic makeExpr2_dyn();

		virtual Void run( ::haxe::_Template::TemplateExpr e);
		Dynamic run_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Template */ 
