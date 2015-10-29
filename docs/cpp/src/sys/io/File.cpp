#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace sys{
namespace io{

Void File_obj::__construct()
{
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new()
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct();
	return _result_;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > _result_ = new File_obj();
	_result_->__construct();
	return _result_;}

::String File_obj::getContent( ::String path){
	HX_STACK_FRAME("sys.io.File","getContent",0xb28b4a0e,"sys.io.File.getContent","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",27,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(28)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::haxe::io::Bytes tmp1 = ::sys::io::File_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(29)
	::String tmp2 = b->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getContent,return )

::haxe::io::Bytes File_obj::getBytes( ::String path){
	HX_STACK_FRAME("sys.io.File","getBytes",0xbe457600,"sys.io.File.getBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",32,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(33)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Array< unsigned char > data = ::sys::io::File_obj::file_contents(tmp);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(34)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(data);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getBytes,return )

Void File_obj::saveContent( ::String path,::String content){
{
		HX_STACK_FRAME("sys.io.File","saveContent",0xa5557651,"sys.io.File.saveContent","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",37,0xd489c8a1)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(38)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::sys::io::FileOutput tmp1 = ::sys::io::File_obj::write(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::sys::io::FileOutput f = tmp1;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(39)
		::String tmp2 = content;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		f->writeString(tmp2);
		HX_STACK_LINE(40)
		f->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,saveContent,(void))

Void File_obj::saveBytes( ::String path,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("sys.io.File","saveBytes",0x6700fb83,"sys.io.File.saveBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",43,0xd489c8a1)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(44)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::sys::io::FileOutput tmp1 = ::sys::io::File_obj::write(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::sys::io::FileOutput f = tmp1;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(45)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		f->write(tmp2);
		HX_STACK_LINE(46)
		f->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,saveBytes,(void))

::sys::io::FileInput File_obj::read( ::String path,hx::Null< bool >  __o_binary){
bool binary = __o_binary.Default(true);
	HX_STACK_FRAME("sys.io.File","read",0x203d07e1,"sys.io.File.read","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",49,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(binary,"binary")
{
		HX_STACK_LINE(50)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		bool tmp1 = binary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp1)){
			HX_STACK_LINE(50)
			tmp2 = HX_HCSTRING("rb","\xb0","\x63","\x00","\x00");
		}
		else{
			HX_STACK_LINE(50)
			tmp2 = HX_HCSTRING("r","\x72","\x00","\x00","\x00");
		}
		HX_STACK_LINE(50)
		Dynamic tmp3 = ::sys::io::File_obj::file_open(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::sys::io::FileInput tmp4 = ::sys::io::FileInput_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,read,return )

::sys::io::FileOutput File_obj::write( ::String path,hx::Null< bool >  __o_binary){
bool binary = __o_binary.Default(true);
	HX_STACK_FRAME("sys.io.File","write",0xfec8a9f4,"sys.io.File.write","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",53,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(binary,"binary")
{
		HX_STACK_LINE(54)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = binary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(54)
			tmp2 = HX_HCSTRING("wb","\x0b","\x68","\x00","\x00");
		}
		else{
			HX_STACK_LINE(54)
			tmp2 = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
		}
		HX_STACK_LINE(54)
		Dynamic tmp3 = ::sys::io::File_obj::file_open(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		::sys::io::FileOutput tmp4 = ::sys::io::FileOutput_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,write,return )

::sys::io::FileOutput File_obj::append( ::String path,hx::Null< bool >  __o_binary){
bool binary = __o_binary.Default(true);
	HX_STACK_FRAME("sys.io.File","append",0x02ba1725,"sys.io.File.append","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",57,0xd489c8a1)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(binary,"binary")
{
		HX_STACK_LINE(58)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = binary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(58)
			tmp2 = HX_HCSTRING("ab","\xe1","\x54","\x00","\x00");
		}
		else{
			HX_STACK_LINE(58)
			tmp2 = HX_HCSTRING("a","\x61","\x00","\x00","\x00");
		}
		HX_STACK_LINE(58)
		Dynamic tmp3 = ::sys::io::File_obj::file_open(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::sys::io::FileOutput tmp4 = ::sys::io::FileOutput_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,append,return )

Void File_obj::copy( ::String srcPath,::String dstPath){
{
		HX_STACK_FRAME("sys.io.File","copy",0x165a7840,"sys.io.File.copy","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",61,0xd489c8a1)
		HX_STACK_ARG(srcPath,"srcPath")
		HX_STACK_ARG(dstPath,"dstPath")
		HX_STACK_LINE(62)
		::String tmp = srcPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::sys::io::FileInput tmp1 = ::sys::io::File_obj::read(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		::sys::io::FileInput s = tmp1;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(63)
		::String tmp2 = dstPath;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::sys::io::FileOutput tmp3 = ::sys::io::File_obj::write(tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::sys::io::FileOutput d = tmp3;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(64)
		::sys::io::FileInput tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		d->writeInput(tmp4,null());
		HX_STACK_LINE(65)
		s->close();
		HX_STACK_LINE(66)
		d->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,copy,(void))

Dynamic File_obj::file_contents;

Dynamic File_obj::file_open;


File_obj::File_obj()
{
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { outValue = write_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveBytes") ) { outValue = saveBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"file_open") ) { outValue = file_open; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContent") ) { outValue = getContent_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"saveContent") ) { outValue = saveContent_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"file_contents") ) { outValue = file_contents; return true;  }
	}
	return false;
}

bool File_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"file_open") ) { file_open=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"file_contents") ) { file_contents=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::file_contents,HX_HCSTRING("file_contents","\x7d","\x7e","\x26","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &File_obj::file_open,HX_HCSTRING("file_open","\xad","\x4f","\xbf","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::file_contents,"file_contents");
	HX_MARK_MEMBER_NAME(File_obj::file_open,"file_open");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::file_contents,"file_contents");
	HX_VISIT_MEMBER_NAME(File_obj::file_open,"file_open");
};

#endif

hx::Class File_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getContent","\x43","\x13","\xd9","\x68"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("saveContent","\x7c","\xbb","\x17","\x73"),
	HX_HCSTRING("saveBytes","\xee","\x0f","\x45","\x4c"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("file_contents","\x7d","\x7e","\x26","\x74"),
	HX_HCSTRING("file_open","\xad","\x4f","\xbf","\x6b"),
	::String(null()) };

void File_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.File","\xc3","\xef","\x8d","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &File_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
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

void File_obj::__boot()
{
	file_contents= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_contents","\x7d","\x7e","\x26","\x74"),(int)1);
	file_open= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_open","\xad","\x4f","\xbf","\x6b"),(int)2);
}

} // end namespace sys
} // end namespace io
