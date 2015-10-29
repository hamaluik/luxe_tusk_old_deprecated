#ifndef INCLUDED_sys_db_Manager
#define INCLUDED_sys_db_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,Manager)
HX_DECLARE_CLASS2(sys,db,RecordType)
HX_DECLARE_CLASS2(sys,db,ResultSet)
namespace sys{
namespace db{


class HXCPP_CLASS_ATTRIBUTES  Manager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Manager_obj OBJ_;
		Manager_obj();
		Void __construct(::hx::Class classval);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.db.Manager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Manager_obj > __new(::hx::Class classval);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Manager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1"); }

		static void __boot();
		static ::sys::db::Connection cnx;
		static ::String lockMode;
		static ::String cache_field;
		static ::haxe::ds::StringMap object_cache;
		static ::List init_list;
		static ::haxe::ds::StringMap KEYWORDS;
		static ::sys::db::Connection set_cnx( ::sys::db::Connection c);
		static Dynamic set_cnx_dyn();

		static ::String getFieldName( Dynamic field);
		static Dynamic getFieldName_dyn();

		static ::String nullCompare( ::String a,::String b,bool eq);
		static Dynamic nullCompare_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static Void cleanup( );
		static Dynamic cleanup_dyn();

		static ::String quoteAny( Dynamic v);
		static Dynamic quoteAny_dyn();

		static ::String quoteList( ::String v,Dynamic it);
		static Dynamic quoteList_dyn();

		static ::String __depends( );
		static Dynamic __depends_dyn();

		Dynamic table_infos;
		::String table_name;
		Array< ::String > table_keys;
		Dynamic class_proto;
		virtual ::List all( Dynamic lock);
		Dynamic all_dyn();

		Dynamic get;
		Dynamic &get_dyn() { return get;}
		Dynamic select;
		Dynamic &select_dyn() { return select;}
		Dynamic search;
		Dynamic &search_dyn() { return search;}
		Dynamic count;
		Dynamic &count_dyn() { return count;}
		Dynamic _delete;
		Dynamic &_delete_dyn() { return _delete;}
		virtual ::List dynamicSearch( Dynamic x,Dynamic lock);
		Dynamic dynamicSearch_dyn();

		virtual ::String quote( ::String s);
		Dynamic quote_dyn();

		virtual ::haxe::io::Bytes doUpdateCache( Dynamic x,::String name,Dynamic v);
		Dynamic doUpdateCache_dyn();

		virtual Void doInsert( Dynamic x);
		Dynamic doInsert_dyn();

		virtual bool isBinary( ::sys::db::RecordType t);
		Dynamic isBinary_dyn();

		virtual bool hasBinaryChanged( ::haxe::io::Bytes a,::haxe::io::Bytes b);
		Dynamic hasBinaryChanged_dyn();

		virtual Void doUpdate( Dynamic x);
		Dynamic doUpdate_dyn();

		virtual ::String getUpdateStatement( Dynamic x);
		Dynamic getUpdateStatement_dyn();

		virtual Void doDelete( Dynamic x);
		Dynamic doDelete_dyn();

		virtual Void doLock( Dynamic i);
		Dynamic doLock_dyn();

		virtual ::String objectToString( Dynamic it);
		Dynamic objectToString_dyn();

		virtual ::haxe::io::Bytes doSerialize( ::String field,Dynamic v);
		Dynamic doSerialize_dyn();

		virtual Dynamic doUnserialize( ::String field,::haxe::io::Bytes b);
		Dynamic doUnserialize_dyn();

		virtual Void normalizeCache( Dynamic x);
		Dynamic normalizeCache_dyn();

		virtual Dynamic cacheObject( Dynamic x,bool lock);
		Dynamic cacheObject_dyn();

		virtual Void make( Dynamic x);
		Dynamic make_dyn();

		virtual Void unmake( Dynamic x);
		Dynamic unmake_dyn();

		virtual ::String quoteField( ::String f);
		Dynamic quoteField_dyn();

		virtual Void addKeys( ::StringBuf s,Dynamic x);
		Dynamic addKeys_dyn();

		virtual ::sys::db::ResultSet unsafeExecute( ::String sql);
		Dynamic unsafeExecute_dyn();

		virtual Dynamic unsafeObject( ::String sql,bool lock);
		Dynamic unsafeObject_dyn();

		virtual ::List unsafeObjects( ::String sql,bool lock);
		Dynamic unsafeObjects_dyn();

		virtual int unsafeCount( ::String sql);
		Dynamic unsafeCount_dyn();

		virtual Void unsafeDelete( ::String sql);
		Dynamic unsafeDelete_dyn();

		virtual Dynamic unsafeGet( Dynamic id,Dynamic lock);
		Dynamic unsafeGet_dyn();

		virtual Dynamic unsafeGetWithKeys( Dynamic keys,Dynamic lock);
		Dynamic unsafeGetWithKeys_dyn();

		virtual Dynamic unsafeGetId( Dynamic o);
		Dynamic unsafeGetId_dyn();

		virtual Void addCondition( ::StringBuf s,Dynamic x);
		Dynamic addCondition_dyn();

		virtual ::hx::Class dbClass( );
		Dynamic dbClass_dyn();

		virtual Dynamic dbInfos( );
		Dynamic dbInfos_dyn();

		virtual ::sys::db::Connection getCnx( );
		Dynamic getCnx_dyn();

		virtual ::String getLockMode( );
		Dynamic getLockMode_dyn();

		virtual Void forceUpdate( Dynamic o,::String field);
		Dynamic forceUpdate_dyn();

		virtual Void initRelation( Dynamic r);
		Dynamic initRelation_dyn();

		virtual Dynamic __get( Dynamic x,::String prop,::String key,Dynamic lock);
		Dynamic __get_dyn();

		virtual Dynamic __set( Dynamic x,::String prop,::String key,Dynamic v);
		Dynamic __set_dyn();

		virtual ::String makeCacheKey( Dynamic x);
		Dynamic makeCacheKey_dyn();

		virtual Void addToCache( Dynamic x);
		Dynamic addToCache_dyn();

		virtual Void removeFromCache( Dynamic x);
		Dynamic removeFromCache_dyn();

		virtual Dynamic getFromCacheKey( ::String key);
		Dynamic getFromCacheKey_dyn();

		virtual Dynamic getFromCache( Dynamic x,bool lock);
		Dynamic getFromCache_dyn();

};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_Manager */ 
