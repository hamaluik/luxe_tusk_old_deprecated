#ifndef INCLUDED_tusk_Entity
#define INCLUDED_tusk_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Serializer)
HX_DECLARE_CLASS1(haxe,Unserializer)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(tusk,Component)
HX_DECLARE_CLASS1(tusk,Entity)
namespace tusk{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(Array< ::Dynamic > components);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="tusk.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new(Array< ::Dynamic > components);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39"); }

		static void __boot();
		static int nextID;
		int id;
		::haxe::ds::IntMap components;
		virtual bool hasType( int tid);
		Dynamic hasType_dyn();

		virtual bool has( ::tusk::Component component);
		Dynamic has_dyn();

		virtual ::tusk::Component get( int tid);
		Dynamic get_dyn();

		virtual ::tusk::Entity push( ::tusk::Component component);
		Dynamic push_dyn();

		virtual ::tusk::Entity removeType( int tid);
		Dynamic removeType_dyn();

		virtual ::tusk::Entity remove( ::tusk::Component component);
		Dynamic remove_dyn();

		virtual Void hxSerialize( ::haxe::Serializer s);
		Dynamic hxSerialize_dyn();

		virtual Void hxUnserialize( ::haxe::Unserializer u);
		Dynamic hxUnserialize_dyn();

};

} // end namespace tusk

#endif /* INCLUDED_tusk_Entity */ 
