#ifndef INCLUDED_tusk_Matcher
#define INCLUDED_tusk_Matcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tusk,Entity)
HX_DECLARE_CLASS1(tusk,Matcher)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Matcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matcher_obj OBJ_;
		Matcher_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Matcher")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matcher_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matcher_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Matcher","\xd2","\x64","\xcd","\x56"); }

		Array< int > includes;
		Array< int > excludes;
		virtual ::tusk::Matcher include( int tid);
		Dynamic include_dyn();

		virtual ::tusk::Matcher exclude( int tid);
		Dynamic exclude_dyn();

		virtual bool isIncluded( int tid);
		Dynamic isIncluded_dyn();

		virtual bool isExcluded( int tid);
		Dynamic isExcluded_dyn();

		virtual bool matchesEntity( ::tusk::Entity entity);
		Dynamic matchesEntity_dyn();

		virtual Array< ::Dynamic > matchEntities( Array< ::Dynamic > entities);
		Dynamic matchEntities_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Matcher */ 
