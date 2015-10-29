#ifndef INCLUDED_sys_db_RecordType
#define INCLUDED_sys_db_RecordType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,db,RecordType)
namespace sys{
namespace db{


class RecordType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RecordType_obj OBJ_;

	public:
		RecordType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("sys.db.RecordType","\xda","\x7d","\xf5","\xcb"); }
		::String __ToString() const { return HX_HCSTRING("RecordType.","\xc3","\x93","\x12","\xb3") + tag; }

		static ::sys::db::RecordType DBigId;
		static inline ::sys::db::RecordType DBigId_dyn() { return DBigId; }
		static ::sys::db::RecordType DBigInt;
		static inline ::sys::db::RecordType DBigInt_dyn() { return DBigInt; }
		static ::sys::db::RecordType DBinary;
		static inline ::sys::db::RecordType DBinary_dyn() { return DBinary; }
		static ::sys::db::RecordType DBool;
		static inline ::sys::db::RecordType DBool_dyn() { return DBool; }
		static ::sys::db::RecordType DBytes(int n);
		static Dynamic DBytes_dyn();
		static ::sys::db::RecordType DData;
		static inline ::sys::db::RecordType DData_dyn() { return DData; }
		static ::sys::db::RecordType DDate;
		static inline ::sys::db::RecordType DDate_dyn() { return DDate; }
		static ::sys::db::RecordType DDateTime;
		static inline ::sys::db::RecordType DDateTime_dyn() { return DDateTime; }
		static ::sys::db::RecordType DEncoded;
		static inline ::sys::db::RecordType DEncoded_dyn() { return DEncoded; }
		static ::sys::db::RecordType DEnum(::String name);
		static Dynamic DEnum_dyn();
		static ::sys::db::RecordType DFlags(Array< ::String > flags,bool autoSize);
		static Dynamic DFlags_dyn();
		static ::sys::db::RecordType DFloat;
		static inline ::sys::db::RecordType DFloat_dyn() { return DFloat; }
		static ::sys::db::RecordType DId;
		static inline ::sys::db::RecordType DId_dyn() { return DId; }
		static ::sys::db::RecordType DInt;
		static inline ::sys::db::RecordType DInt_dyn() { return DInt; }
		static ::sys::db::RecordType DInterval;
		static inline ::sys::db::RecordType DInterval_dyn() { return DInterval; }
		static ::sys::db::RecordType DLongBinary;
		static inline ::sys::db::RecordType DLongBinary_dyn() { return DLongBinary; }
		static ::sys::db::RecordType DMediumInt;
		static inline ::sys::db::RecordType DMediumInt_dyn() { return DMediumInt; }
		static ::sys::db::RecordType DMediumUInt;
		static inline ::sys::db::RecordType DMediumUInt_dyn() { return DMediumUInt; }
		static ::sys::db::RecordType DNekoSerialized;
		static inline ::sys::db::RecordType DNekoSerialized_dyn() { return DNekoSerialized; }
		static ::sys::db::RecordType DNull;
		static inline ::sys::db::RecordType DNull_dyn() { return DNull; }
		static ::sys::db::RecordType DSerialized;
		static inline ::sys::db::RecordType DSerialized_dyn() { return DSerialized; }
		static ::sys::db::RecordType DSingle;
		static inline ::sys::db::RecordType DSingle_dyn() { return DSingle; }
		static ::sys::db::RecordType DSmallBinary;
		static inline ::sys::db::RecordType DSmallBinary_dyn() { return DSmallBinary; }
		static ::sys::db::RecordType DSmallInt;
		static inline ::sys::db::RecordType DSmallInt_dyn() { return DSmallInt; }
		static ::sys::db::RecordType DSmallText;
		static inline ::sys::db::RecordType DSmallText_dyn() { return DSmallText; }
		static ::sys::db::RecordType DSmallUInt;
		static inline ::sys::db::RecordType DSmallUInt_dyn() { return DSmallUInt; }
		static ::sys::db::RecordType DString(int n);
		static Dynamic DString_dyn();
		static ::sys::db::RecordType DText;
		static inline ::sys::db::RecordType DText_dyn() { return DText; }
		static ::sys::db::RecordType DTimeStamp;
		static inline ::sys::db::RecordType DTimeStamp_dyn() { return DTimeStamp; }
		static ::sys::db::RecordType DTinyInt;
		static inline ::sys::db::RecordType DTinyInt_dyn() { return DTinyInt; }
		static ::sys::db::RecordType DTinyText;
		static inline ::sys::db::RecordType DTinyText_dyn() { return DTinyText; }
		static ::sys::db::RecordType DTinyUInt;
		static inline ::sys::db::RecordType DTinyUInt_dyn() { return DTinyUInt; }
		static ::sys::db::RecordType DUId;
		static inline ::sys::db::RecordType DUId_dyn() { return DUId; }
		static ::sys::db::RecordType DUInt;
		static inline ::sys::db::RecordType DUInt_dyn() { return DUInt; }
};

} // end namespace sys
} // end namespace db

#endif /* INCLUDED_sys_db_RecordType */ 
