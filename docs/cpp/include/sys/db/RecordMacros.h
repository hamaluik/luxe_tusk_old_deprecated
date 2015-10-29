#ifndef INCLUDED_sys_db_RecordMacros
#define INCLUDED_sys_db_RecordMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS2(sys,db,RecordMacros)
HX_DECLARE_CLASS2(sys,db,RecordType)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  RecordMacros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RecordMacros_obj OBJ_;
		RecordMacros_obj();
		Void __construct(Dynamic c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db.RecordMacros")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RecordMacros_obj > __new(Dynamic c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RecordMacros_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RecordMacros","\x78","\x94","\x83","\x56"); }

		static void __boot();
		static Dynamic GLOBAL;
		static ::EReg simpleString;
		static ::sys::db::RecordMacros getInfos( ::haxe::macro::Type t);
		static Dynamic getInfos_dyn();

		bool isNull;
		Dynamic manager;
		Dynamic inf;
		Dynamic g;
		virtual Dynamic initGlobals( );
		Dynamic initGlobals_dyn();

		Dynamic error;
		inline Dynamic &error_dyn() {return error; }

		Dynamic _typeof;
		inline Dynamic &_typeof_dyn() {return _typeof; }

		Dynamic follow;
		inline Dynamic &follow_dyn() {return follow; }

		Dynamic getManager;
		inline Dynamic &getManager_dyn() {return getManager; }

		Dynamic resolveType;
		inline Dynamic &resolveType_dyn() {return resolveType; }

		virtual Dynamic makeInt( ::haxe::macro::Type t);
		Dynamic makeInt_dyn();

		virtual Dynamic makeRecord( ::haxe::macro::Type t);
		Dynamic makeRecord_dyn();

		virtual Array< ::String > getFlags( ::haxe::macro::Type t);
		Dynamic getFlags_dyn();

		virtual ::sys::db::RecordType makeType( ::haxe::macro::Type t);
		Dynamic makeType_dyn();

		virtual ::String makeIdent( Dynamic e);
		Dynamic makeIdent_dyn();

		virtual Dynamic getRecordInfos( Dynamic c);
		Dynamic getRecordInfos_dyn();

		virtual ::String quoteField( ::String f);
		Dynamic quoteField_dyn();

		virtual Void initManager( Dynamic pos);
		Dynamic initManager_dyn();

		virtual Dynamic makeString( ::String s,Dynamic pos);
		Dynamic makeString_dyn();

		virtual Dynamic makeOp( ::String op,Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic makeOp_dyn();

		virtual Dynamic sqlAdd( Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic sqlAdd_dyn();

		virtual Dynamic sqlAddString( Dynamic sql,::String s);
		Dynamic sqlAddString_dyn();

		virtual Dynamic sqlQuoteValue( Dynamic v,::sys::db::RecordType t);
		Dynamic sqlQuoteValue_dyn();

		virtual Dynamic sqlAddValue( Dynamic sql,Dynamic v,::sys::db::RecordType t);
		Dynamic sqlAddValue_dyn();

		virtual int unifyClass( ::sys::db::RecordType t);
		Dynamic unifyClass_dyn();

		virtual bool tryUnify( ::sys::db::RecordType t,::sys::db::RecordType rt);
		Dynamic tryUnify_dyn();

		virtual ::String typeStr( ::sys::db::RecordType t);
		Dynamic typeStr_dyn();

		virtual bool canStringify( ::sys::db::RecordType t);
		Dynamic canStringify_dyn();

		virtual ::haxe::macro::ComplexType convertType( ::sys::db::RecordType t);
		Dynamic convertType_dyn();

		virtual Void unify( ::sys::db::RecordType t,::sys::db::RecordType rt,Dynamic pos);
		Dynamic unify_dyn();

		virtual Dynamic buildCmp( ::String op,Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic buildCmp_dyn();

		virtual Dynamic buildNum( ::String op,Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic buildNum_dyn();

		virtual Dynamic buildInt( ::String op,Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic buildInt_dyn();

		virtual Dynamic buildEq( bool eq,Dynamic e1,Dynamic e2,Dynamic pos);
		Dynamic buildEq_dyn();

		virtual Dynamic buildDefault( Dynamic cond);
		Dynamic buildDefault_dyn();

		virtual Dynamic getField( Dynamic f);
		Dynamic getField_dyn();

		virtual Dynamic buildCond( Dynamic cond);
		Dynamic buildCond_dyn();

		virtual Dynamic ensureType( Dynamic e,::sys::db::RecordType rt);
		Dynamic ensureType_dyn();

		virtual Dynamic checkKeys( Dynamic econd);
		Dynamic checkKeys_dyn();

		virtual ::String orderField( Dynamic e);
		Dynamic orderField_dyn();

		virtual Dynamic concatStrings( Dynamic e);
		Dynamic concatStrings_dyn();

		virtual Void browseStrings( Dynamic inf,Dynamic e);
		Dynamic browseStrings_dyn();

		virtual Dynamic buildOptions( Dynamic eopt);
		Dynamic buildOptions_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_RecordMacros */ 
