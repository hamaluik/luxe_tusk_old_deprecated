#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif
namespace sys{
namespace io{

Void FileInput_obj::__construct(Dynamic f)
{
HX_STACK_FRAME("sys.io.FileInput","new",0x565591b9,"sys.io.FileInput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",31,0x54202051)
HX_STACK_THIS(this)
HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(31)
	this->__f = f;
}
;
	return null();
}

//FileInput_obj::~FileInput_obj() { }

Dynamic FileInput_obj::__CreateEmpty() { return  new FileInput_obj; }
hx::ObjectPtr< FileInput_obj > FileInput_obj::__new(Dynamic f)
{  hx::ObjectPtr< FileInput_obj > _result_ = new FileInput_obj();
	_result_->__construct(f);
	return _result_;}

Dynamic FileInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileInput_obj > _result_ = new FileInput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int FileInput_obj::readByte( ){
	HX_STACK_FRAME("sys.io.FileInput","readByte",0x25e0b585,"sys.io.FileInput.readByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",34,0x54202051)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(36)
		Dynamic tmp1 = this->__f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		tmp = ::sys::io::FileInput_obj::file_read_char(tmp1);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(38)
				bool tmp1 = e->__IsArray();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(38)
				if ((tmp1)){
					HX_STACK_LINE(39)
					::haxe::io::Eof tmp2 = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(39)
					HX_STACK_DO_THROW(tmp2);
				}
				else{
					HX_STACK_LINE(41)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(41)
					::haxe::io::Error tmp3 = ::haxe::io::Error_obj::Custom(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(tmp3);
				}
			}
		}
	}
	HX_STACK_LINE(35)
	return tmp;
}


int FileInput_obj::readBytes( ::haxe::io::Bytes s,int p,int l){
	HX_STACK_FRAME("sys.io.FileInput","readBytes",0xfebe1f4e,"sys.io.FileInput.readBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",45,0x54202051)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(46)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(47)
		Dynamic tmp1 = this->__f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		int tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		int tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		tmp = ::sys::io::FileInput_obj::file_read(tmp1,s->b,tmp2,tmp3);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(49)
				bool tmp1 = e->__IsArray();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				if ((tmp1)){
					HX_STACK_LINE(50)
					::haxe::io::Eof tmp2 = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(50)
					HX_STACK_DO_THROW(tmp2);
				}
				else{
					HX_STACK_LINE(52)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(52)
					::haxe::io::Error tmp3 = ::haxe::io::Error_obj::Custom(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(52)
					HX_STACK_DO_THROW(tmp3);
				}
			}
		}
	}
	HX_STACK_LINE(46)
	return tmp;
}


Void FileInput_obj::close( ){
{
		HX_STACK_FRAME("sys.io.FileInput","close",0x735aa151,"sys.io.FileInput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",56,0x54202051)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::close();
		HX_STACK_LINE(58)
		Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::sys::io::FileInput_obj::file_close(tmp);
	}
return null();
}


Void FileInput_obj::seek( int p,::sys::io::FileSeek pos){
{
		HX_STACK_FRAME("sys.io.FileInput","seek",0x37d7f1ff,"sys.io.FileInput.seek","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",61,0x54202051)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(62)
		Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		int tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		bool tmp2 = (pos == ::sys::io::FileSeek_obj::SeekBegin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp2)){
			HX_STACK_LINE(62)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(62)
			bool tmp4 = (pos == ::sys::io::FileSeek_obj::SeekCur);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			if ((tmp4)){
				HX_STACK_LINE(62)
				tmp3 = (int)1;
			}
			else{
				HX_STACK_LINE(62)
				tmp3 = (int)2;
			}
		}
		HX_STACK_LINE(62)
		::sys::io::FileInput_obj::file_seek(tmp,tmp1,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FileInput_obj,seek,(void))

int FileInput_obj::tell( ){
	HX_STACK_FRAME("sys.io.FileInput","tell",0x38812eb8,"sys.io.FileInput.tell","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",65,0x54202051)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	int tmp1 = ::sys::io::FileInput_obj::file_tell(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FileInput_obj,tell,return )

bool FileInput_obj::eof( ){
	HX_STACK_FRAME("sys.io.FileInput","eof",0x564ec615,"sys.io.FileInput.eof","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileInput.hx",70,0x54202051)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1 = ::sys::io::FileInput_obj::file_eof(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FileInput_obj,eof,return )

Dynamic FileInput_obj::file_eof;

Dynamic FileInput_obj::file_read;

Dynamic FileInput_obj::file_read_char;

Dynamic FileInput_obj::file_close;

Dynamic FileInput_obj::file_seek;

Dynamic FileInput_obj::file_tell;


FileInput_obj::FileInput_obj()
{
}

void FileInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileInput);
	HX_MARK_MEMBER_NAME(__f,"__f");
	HX_MARK_END_CLASS();
}

void FileInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__f,"__f");
}

Dynamic FileInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return __f; }
		if (HX_FIELD_EQ(inName,"eof") ) { return eof_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		if (HX_FIELD_EQ(inName,"tell") ) { return tell_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FileInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"file_eof") ) { outValue = file_eof; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"file_read") ) { outValue = file_read; return true;  }
		if (HX_FIELD_EQ(inName,"file_seek") ) { outValue = file_seek; return true;  }
		if (HX_FIELD_EQ(inName,"file_tell") ) { outValue = file_tell; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"file_close") ) { outValue = file_close; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"file_read_char") ) { outValue = file_read_char; return true;  }
	}
	return false;
}

Dynamic FileInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { __f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FileInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"file_eof") ) { file_eof=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"file_read") ) { file_read=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_seek") ) { file_seek=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_tell") ) { file_tell=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"file_close") ) { file_close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"file_read_char") ) { file_read_char=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void FileInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__f","\x46","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FileInput_obj,__f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_eof,HX_HCSTRING("file_eof","\x39","\x06","\x83","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_read,HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_read_char,HX_HCSTRING("file_read_char","\xdc","\x14","\xb2","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_close,HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_seek,HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileInput_obj::file_tell,HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("tell","\x31","\xc2","\xf9","\x4c"),
	HX_HCSTRING("eof","\xbc","\x04","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_eof,"file_eof");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_read,"file_read");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_read_char,"file_read_char");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_close,"file_close");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_seek,"file_seek");
	HX_MARK_MEMBER_NAME(FileInput_obj::file_tell,"file_tell");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_eof,"file_eof");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_read,"file_read");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_read_char,"file_read_char");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_close,"file_close");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_seek,"file_seek");
	HX_VISIT_MEMBER_NAME(FileInput_obj::file_tell,"file_tell");
};

#endif

hx::Class FileInput_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("file_eof","\x39","\x06","\x83","\x6d"),
	HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"),
	HX_HCSTRING("file_read_char","\xdc","\x14","\xb2","\x4f"),
	HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),
	HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"),
	HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"),
	::String(null()) };

void FileInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.FileInput","\x47","\x41","\x72","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileInput_obj::__GetStatic;
	__mClass->mSetStaticField = &FileInput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileInput_obj >;
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

void FileInput_obj::__boot()
{
	file_eof= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_eof","\x39","\x06","\x83","\x6d"),(int)1);
	file_read= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"),(int)4);
	file_read_char= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_read_char","\xdc","\x14","\xb2","\x4f"),(int)1);
	file_close= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),(int)1);
	file_seek= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"),(int)3);
	file_tell= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"),(int)1);
}

} // end namespace sys
} // end namespace io
