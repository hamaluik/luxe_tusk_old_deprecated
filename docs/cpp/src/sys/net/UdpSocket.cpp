#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_net_Address
#include <sys/net/Address.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net_UdpSocket
#include <sys/net/UdpSocket.h>
#endif
namespace sys{
namespace net{

Void UdpSocket_obj::__construct()
{
HX_STACK_FRAME("sys.net.UdpSocket","new",0x7361a534,"sys.net.UdpSocket.new","C:\\HaxeToolkit\\haxe\\std/sys/net/UdpSocket.hx",29,0x872b0a97)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	HX_STACK_DO_THROW(HX_HCSTRING("Not available on this platform","\x38","\xda","\x74","\x48"));
	HX_STACK_LINE(31)
	super::__construct();
}
;
	return null();
}

//UdpSocket_obj::~UdpSocket_obj() { }

Dynamic UdpSocket_obj::__CreateEmpty() { return  new UdpSocket_obj; }
hx::ObjectPtr< UdpSocket_obj > UdpSocket_obj::__new()
{  hx::ObjectPtr< UdpSocket_obj > _result_ = new UdpSocket_obj();
	_result_->__construct();
	return _result_;}

Dynamic UdpSocket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UdpSocket_obj > _result_ = new UdpSocket_obj();
	_result_->__construct();
	return _result_;}

int UdpSocket_obj::sendTo( ::haxe::io::Bytes buf,int pos,int len,::sys::net::Address addr){
	HX_STACK_FRAME("sys.net.UdpSocket","sendTo",0x4bf4a08f,"sys.net.UdpSocket.sendTo","C:\\HaxeToolkit\\haxe\\std/sys/net/UdpSocket.hx",38,0x872b0a97)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(38)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(UdpSocket_obj,sendTo,return )

int UdpSocket_obj::readFrom( ::haxe::io::Bytes buf,int pos,int len,::sys::net::Address addr){
	HX_STACK_FRAME("sys.net.UdpSocket","readFrom",0x35b4aa8c,"sys.net.UdpSocket.readFrom","C:\\HaxeToolkit\\haxe\\std/sys/net/UdpSocket.hx",45,0x872b0a97)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(45)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(UdpSocket_obj,readFrom,return )


UdpSocket_obj::UdpSocket_obj()
{
}

Dynamic UdpSocket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sendTo") ) { return sendTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFrom") ) { return readFrom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sendTo","\xe3","\xb8","\x84","\x6b"),
	HX_HCSTRING("readFrom","\xe0","\x7f","\xba","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UdpSocket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UdpSocket_obj::__mClass,"__mClass");
};

#endif

hx::Class UdpSocket_obj::__mClass;

void UdpSocket_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.UdpSocket","\x42","\x3b","\xfa","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UdpSocket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace net
