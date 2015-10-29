#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace cpp{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::load( ::String lib,::String prim,int nargs){
	HX_STACK_FRAME("cpp.Lib","load",0xd2b2dcba,"cpp.Lib.load","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",30,0xfc8f8c7e)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(nargs,"nargs")
	HX_STACK_LINE(34)
	Dynamic tmp = ::__loadprim(lib,prim,nargs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

int Lib_obj::unloadAllLibraries( ){
	HX_STACK_FRAME("cpp.Lib","unloadAllLibraries",0xe74297eb,"cpp.Lib.unloadAllLibraries","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",42,0xfc8f8c7e)
	HX_STACK_LINE(43)
	int tmp = ::__hxcpp_unload_all_libraries();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,unloadAllLibraries,return )

Dynamic Lib_obj::_loadPrime( ::String lib,::String prim,::String signature,hx::Null< bool >  __o_quietFail){
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("cpp.Lib","_loadPrime",0x4ba6888e,"cpp.Lib._loadPrime","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",47,0xfc8f8c7e)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(49)
		::cpp::Function< ::hx::Object * (  const ::cpp::Char *  ) > tmp = ::__hxcpp_cast_get_proc_address(lib,(prim + HX_HCSTRING("__prime","\x1f","\xb0","\xe9","\x32")),quietFail);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::cpp::Function< ::hx::Object * (  const ::cpp::Char *  ) > factory = tmp;		HX_STACK_VAR(factory,"factory");
		HX_STACK_LINE(50)
		bool tmp1 = (factory != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		if ((tmp1)){
			HX_STACK_LINE(52)
			Dynamic func = factory.call(signature.__s);		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(53)
			bool tmp2 = (func == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			if ((tmp2)){
				HX_STACK_LINE(53)
				bool tmp4 = quietFail;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				tmp3 = !(tmp5);
			}
			else{
				HX_STACK_LINE(53)
				tmp3 = false;
			}
			HX_STACK_LINE(53)
			if ((tmp3)){
				HX_STACK_LINE(54)
				::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + prim);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				::String tmp5 = (tmp4 + HX_HCSTRING(" does not have signature ","\x0c","\x77","\x54","\x95"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				::String tmp6 = signature;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(55)
			Dynamic tmp4 = func;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			return tmp4;
		}
		HX_STACK_LINE(57)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Lib_obj,_loadPrime,return )

Dynamic Lib_obj::loadLazy( ::String lib,::String prim,int nargs){
	HX_STACK_FRAME("cpp.Lib","loadLazy",0x865efe4e,"cpp.Lib.loadLazy","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",65,0xfc8f8c7e)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(prim,"prim")
	HX_STACK_ARG(nargs,"nargs")
	HX_STACK_LINE(66)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(67)
		Dynamic tmp = ::__loadprim(lib,prim,nargs);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		return tmp;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(69)
				int tmp = nargs;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(69)
				switch( (int)(tmp)){
					case (int)0: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",70,0xfc8f8c7e)
							{
								HX_STACK_LINE(70)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(70)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(70)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)2: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 2; }
						Void run(Dynamic _1,Dynamic _2){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",71,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							{
								HX_STACK_LINE(71)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(71)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC2((void))

						HX_STACK_LINE(71)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)3: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 3; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",72,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							{
								HX_STACK_LINE(72)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(72)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC3((void))

						HX_STACK_LINE(72)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)4: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 4; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",73,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							HX_STACK_ARG(_4,"_4")
							{
								HX_STACK_LINE(73)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(73)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC4((void))

						HX_STACK_LINE(73)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					case (int)5: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 5; }
						Void run(Dynamic _1,Dynamic _2,Dynamic _3,Dynamic _4,Dynamic _5){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",74,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							HX_STACK_ARG(_2,"_2")
							HX_STACK_ARG(_3,"_3")
							HX_STACK_ARG(_4,"_4")
							HX_STACK_ARG(_5,"_5")
							{
								HX_STACK_LINE(74)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(74)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC5((void))

						HX_STACK_LINE(74)
						return  Dynamic(new _Function_3_1(e));
					}
					;break;
					default: {

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,e)
						int __ArgCount() const { return 1; }
						Void run(Dynamic _1){
							HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",75,0xfc8f8c7e)
							HX_STACK_ARG(_1,"_1")
							{
								HX_STACK_LINE(75)
								Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(75)
								HX_STACK_DO_THROW(tmp1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(75)
						return  Dynamic(new _Function_3_1(e));
					}
				}
			}
		}
	}
	HX_STACK_LINE(78)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,loadLazy,return )

Void Lib_obj::rethrow( Dynamic inExp){
{
		HX_STACK_FRAME("cpp.Lib","rethrow",0x3bf8427f,"cpp.Lib.rethrow","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",81,0xfc8f8c7e)
		HX_STACK_ARG(inExp,"inExp")
		HX_STACK_LINE(81)
		Dynamic tmp = inExp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		HX_STACK_DO_THROW(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,rethrow,(void))

::String Lib_obj::stringReference( ::haxe::io::Bytes inBytes){
	HX_STACK_FRAME("cpp.Lib","stringReference",0x72c1faa6,"cpp.Lib.stringReference","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",84,0xfc8f8c7e)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_LINE(85)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(86)
	::__hxcpp_string_of_bytes(inBytes->b,result,(int)0,(int)0,true);
	HX_STACK_LINE(87)
	::String tmp = result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,stringReference,return )

Void Lib_obj::pushDllSearchPath( ::String inPath){
{
		HX_STACK_FRAME("cpp.Lib","pushDllSearchPath",0x96ed5ce3,"cpp.Lib.pushDllSearchPath","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",91,0xfc8f8c7e)
		HX_STACK_ARG(inPath,"inPath")
		HX_STACK_LINE(91)
		::__hxcpp_push_dll_path(inPath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,pushDllSearchPath,(void))

::String Lib_obj::getDllExtension( ){
	HX_STACK_FRAME("cpp.Lib","getDllExtension",0x63a7ca9d,"cpp.Lib.getDllExtension","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",94,0xfc8f8c7e)
	HX_STACK_LINE(94)
	::String tmp = ::__hxcpp_get_dll_extension();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getDllExtension,return )

::String Lib_obj::getBinDirectory( ){
	HX_STACK_FRAME("cpp.Lib","getBinDirectory",0x0956fc48,"cpp.Lib.getBinDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",97,0xfc8f8c7e)
	HX_STACK_LINE(97)
	::String tmp = ::__hxcpp_get_bin_dir();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getBinDirectory,return )

::haxe::io::Bytes Lib_obj::bytesReference( ::String s){
	HX_STACK_FRAME("cpp.Lib","bytesReference",0x89d6bd74,"cpp.Lib.bytesReference","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",105,0xfc8f8c7e)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(106)
	Array< unsigned char > bytes = Array_obj< unsigned char >::__new();		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(107)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	bytes->__unsafeStringReference(tmp);
	HX_STACK_LINE(108)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(bytes);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,bytesReference,return )

Void Lib_obj::print( Dynamic v){
{
		HX_STACK_FRAME("cpp.Lib","print",0xd96a5719,"cpp.Lib.print","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",115,0xfc8f8c7e)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(115)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,print,(void))

Dynamic Lib_obj::haxeToNeko( Dynamic v){
	HX_STACK_FRAME("cpp.Lib","haxeToNeko",0x02e89710,"cpp.Lib.haxeToNeko","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",122,0xfc8f8c7e)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(123)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,haxeToNeko,return )

Dynamic Lib_obj::nekoToHaxe( Dynamic v){
	HX_STACK_FRAME("cpp.Lib","nekoToHaxe",0x84b99cd0,"cpp.Lib.nekoToHaxe","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",130,0xfc8f8c7e)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(131)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,nekoToHaxe,return )

Void Lib_obj::println( Dynamic v){
{
		HX_STACK_FRAME("cpp.Lib","println",0xca016ddb,"cpp.Lib.println","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",137,0xfc8f8c7e)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(137)
		::__hxcpp_println(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,println,(void))

Void Lib_obj::setFloatFormat( ::String inFormat){
{
		HX_STACK_FRAME("cpp.Lib","setFloatFormat",0x5765e505,"cpp.Lib.setFloatFormat","C:\\HaxeToolkit\\haxe\\std/cpp/Lib.hx",142,0xfc8f8c7e)
		HX_STACK_ARG(inFormat,"inFormat")
		HX_STACK_LINE(142)
		::__hxcpp_set_float_format(inFormat);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,setFloatFormat,(void))


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rethrow") ) { outValue = rethrow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadLazy") ) { outValue = loadLazy_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_loadPrime") ) { outValue = _loadPrime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"haxeToNeko") ) { outValue = haxeToNeko_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nekoToHaxe") ) { outValue = nekoToHaxe_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesReference") ) { outValue = bytesReference_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloatFormat") ) { outValue = setFloatFormat_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stringReference") ) { outValue = stringReference_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDllExtension") ) { outValue = getDllExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBinDirectory") ) { outValue = getBinDirectory_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pushDllSearchPath") ) { outValue = pushDllSearchPath_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unloadAllLibraries") ) { outValue = unloadAllLibraries_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unloadAllLibraries","\x57","\x7a","\x5f","\x3a"),
	HX_HCSTRING("_loadPrime","\xfa","\x1e","\x65","\x3f"),
	HX_HCSTRING("loadLazy","\xba","\xe1","\x4c","\xb8"),
	HX_HCSTRING("rethrow","\x93","\xb0","\x2a","\xf6"),
	HX_HCSTRING("stringReference","\xba","\x9c","\xee","\xe4"),
	HX_HCSTRING("pushDllSearchPath","\xf7","\xab","\x15","\x67"),
	HX_HCSTRING("getDllExtension","\xb1","\x6c","\xd4","\xd5"),
	HX_HCSTRING("getBinDirectory","\x5c","\x9e","\x83","\x7b"),
	HX_HCSTRING("bytesReference","\xe0","\xf9","\xde","\x7e"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("haxeToNeko","\x7c","\x2d","\xa7","\xf6"),
	HX_HCSTRING("nekoToHaxe","\x3c","\x33","\x78","\x78"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("setFloatFormat","\x71","\x21","\x6e","\x4c"),
	::String(null()) };

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.Lib","\x5a","\x26","\x48","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
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

} // end namespace cpp
