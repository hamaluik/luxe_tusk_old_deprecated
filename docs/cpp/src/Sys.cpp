#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",25,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",28,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::Sys_obj::print(tmp);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

::haxe::io::Input Sys_obj::_stdin( ){
	HX_STACK_FRAME("Sys","stdin",0x03b9a107,"Sys.stdin","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",33,0x57bbb657)
	HX_STACK_LINE(34)
	Dynamic tmp = ::Sys_obj::file_stdin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::haxe::io::Input tmp1 = ::sys::io::FileInput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stdin,return )

::haxe::io::Output Sys_obj::_stdout( ){
	HX_STACK_FRAME("Sys","stdout",0x3eb7d92c,"Sys.stdout","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",37,0x57bbb657)
	HX_STACK_LINE(38)
	Dynamic tmp = ::Sys_obj::file_stdout();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::haxe::io::Output tmp1 = ::sys::io::FileOutput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stdout,return )

::haxe::io::Output Sys_obj::_stderr( ){
	HX_STACK_FRAME("Sys","stderr",0x3eb04003,"Sys.stderr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",41,0x57bbb657)
	HX_STACK_LINE(42)
	Dynamic tmp = ::Sys_obj::file_stderr();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::io::Output tmp1 = ::sys::io::FileOutput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stderr,return )

int Sys_obj::getChar( bool echo){
	HX_STACK_FRAME("Sys","getChar",0xc9142a0b,"Sys.getChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",45,0x57bbb657)
	HX_STACK_ARG(echo,"echo")
	HX_STACK_LINE(46)
	bool tmp = echo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = ::Sys_obj::getch(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getChar,return )

Array< ::String > Sys_obj::args( ){
	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",50,0x57bbb657)
	HX_STACK_LINE(50)
	return ::__get_args();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::getEnv( ::String s){
	HX_STACK_FRAME("Sys","getEnv",0xd9e05658,"Sys.getEnv","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",53,0x57bbb657)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(54)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::String tmp1 = ::Sys_obj::get_env(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::String v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(55)
	bool tmp2 = (v == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	if ((tmp2)){
		HX_STACK_LINE(56)
		return null();
	}
	HX_STACK_LINE(57)
	::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getEnv,return )

Void Sys_obj::putEnv( ::String s,::String v){
{
		HX_STACK_FRAME("Sys","putEnv",0xa97fddbf,"Sys.putEnv","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",60,0x57bbb657)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(61)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::Sys_obj::put_env(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,putEnv,(void))

Void Sys_obj::sleep( Float seconds){
{
		HX_STACK_FRAME("Sys","sleep",0xfe70aad6,"Sys.sleep","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",64,0x57bbb657)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(65)
		Float tmp = seconds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::Sys_obj::_sleep(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

bool Sys_obj::setTimeLocale( ::String loc){
	HX_STACK_FRAME("Sys","setTimeLocale",0x1bff3f88,"Sys.setTimeLocale","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",68,0x57bbb657)
	HX_STACK_ARG(loc,"loc")
	HX_STACK_LINE(69)
	::String tmp = loc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = ::Sys_obj::set_time_locale(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setTimeLocale,return )

::String Sys_obj::getCwd( ){
	HX_STACK_FRAME("Sys","getCwd",0xd9ded99b,"Sys.getCwd","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",72,0x57bbb657)
	HX_STACK_LINE(73)
	::String tmp = ::Sys_obj::get_cwd();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::String tmp1 = ::String(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

Void Sys_obj::setCwd( ::String s){
{
		HX_STACK_FRAME("Sys","setCwd",0xa6272e0f,"Sys.setCwd","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",76,0x57bbb657)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(77)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::Sys_obj::set_cwd(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

::String Sys_obj::systemName( ){
	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",80,0x57bbb657)
	HX_STACK_LINE(81)
	::String tmp = ::Sys_obj::sys_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

::String Sys_obj::escapeArgument( ::String arg){
	HX_STACK_FRAME("Sys","escapeArgument",0xb9d4397f,"Sys.escapeArgument","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",84,0x57bbb657)
	HX_STACK_ARG(arg,"arg")
	HX_STACK_LINE(85)
	bool ok = true;		HX_STACK_VAR(ok,"ok");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int _g = arg.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			Dynamic tmp4 = arg.charCodeAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Dynamic _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(87)
			bool tmp5 = (_g2 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			if ((tmp5)){
				HX_STACK_LINE(87)
				Dynamic tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				switch( (int)(tmp6)){
					case (int)32: case (int)9: case (int)34: case (int)38: case (int)124: case (int)60: case (int)62: case (int)35: case (int)59: case (int)42: case (int)63: case (int)40: case (int)41: case (int)123: case (int)125: case (int)36: {
						HX_STACK_LINE(89)
						ok = false;
					}
					;break;
					case (int)0: case (int)13: case (int)10: {
						HX_STACK_LINE(91)
						int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						::String tmp8 = arg.substr((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						arg = tmp8;
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(93)
	bool tmp = ok;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(94)
		::String tmp1 = arg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		return tmp1;
	}
	HX_STACK_LINE(95)
	::String tmp1 = arg.split(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"))->join(HX_HCSTRING("\\\\","\x80","\x50","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::String tmp2 = tmp1.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->join(HX_HCSTRING("\\\"","\x46","\x50","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	::String tmp3 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,escapeArgument,return )

int Sys_obj::command( ::String cmd,Array< ::String > args){
	HX_STACK_FRAME("Sys","command",0x363f8cca,"Sys.command","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",98,0x57bbb657)
	HX_STACK_ARG(cmd,"cmd")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(99)
	bool tmp = (args != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(100)
		::String tmp1 = cmd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::String tmp2 = ::Sys_obj::escapeArgument(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		cmd = tmp2;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp3 = (_g < args->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::String tmp5 = args->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				::String a = tmp5;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				::String tmp7 = ::Sys_obj::escapeArgument(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				hx::AddEq(cmd,tmp8);
			}
		}
	}
	HX_STACK_LINE(104)
	::String tmp1 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = (tmp1 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	if ((tmp2)){
		HX_STACK_LINE(104)
		::String tmp3 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + cmd);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		cmd = tmp4;
	}
	HX_STACK_LINE(105)
	::String tmp3 = cmd;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int tmp4 = ::Sys_obj::sys_command(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,command,return )

Void Sys_obj::exit( int code){
{
		HX_STACK_FRAME("Sys","exit",0xed97463f,"Sys.exit","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",109,0x57bbb657)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(109)
		::__hxcpp_exit(code);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))

Float Sys_obj::time( ){
	HX_STACK_FRAME("Sys","time",0xf7761b2e,"Sys.time","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",112,0x57bbb657)
	HX_STACK_LINE(113)
	Float tmp = ::Sys_obj::sys_time();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,time,return )

Float Sys_obj::cpuTime( ){
	HX_STACK_FRAME("Sys","cpuTime",0x274f48d4,"Sys.cpuTime","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",116,0x57bbb657)
	HX_STACK_LINE(117)
	Float tmp = ::Sys_obj::sys_cpu_time();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,cpuTime,return )

::String Sys_obj::executablePath( ){
	HX_STACK_FRAME("Sys","executablePath",0xfc9406f0,"Sys.executablePath","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",120,0x57bbb657)
	HX_STACK_LINE(121)
	::String tmp = ::Sys_obj::sys_exe_path();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::String tmp1 = ::String(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,executablePath,return )

::haxe::ds::StringMap Sys_obj::environment( ){
	HX_STACK_FRAME("Sys","environment",0x24af52d2,"Sys.environment","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",124,0x57bbb657)
	HX_STACK_LINE(125)
	Array< ::String > vars = ::Sys_obj::sys_env();		HX_STACK_VAR(vars,"vars");
	HX_STACK_LINE(126)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::haxe::ds::StringMap result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(127)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(128)
	while((true)){
		HX_STACK_LINE(128)
		bool tmp1 = (i < vars->length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		if ((tmp2)){
			HX_STACK_LINE(128)
			break;
		}
		HX_STACK_LINE(129)
		::String tmp3 = vars->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		int tmp4 = (i + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		::String tmp5 = vars->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		result->set(tmp3,tmp5);
		HX_STACK_LINE(130)
		hx::AddEq(i,(int)2);
	}
	HX_STACK_LINE(132)
	::haxe::ds::StringMap tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,environment,return )

Dynamic Sys_obj::get_env;

Dynamic Sys_obj::put_env;

Dynamic Sys_obj::_sleep;

Dynamic Sys_obj::set_time_locale;

Dynamic Sys_obj::get_cwd;

Dynamic Sys_obj::set_cwd;

Dynamic Sys_obj::sys_string;

Dynamic Sys_obj::sys_command;

Dynamic Sys_obj::sys_time;

Dynamic Sys_obj::sys_cpu_time;

Dynamic Sys_obj::sys_exe_path;

Dynamic Sys_obj::sys_env;

Dynamic Sys_obj::file_stdin;

Dynamic Sys_obj::file_stdout;

Dynamic Sys_obj::file_stderr;

Dynamic Sys_obj::getch;


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stdin") ) { outValue = _stdin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getch") ) { outValue = getch; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { outValue = _stdout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _stderr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"putEnv") ) { outValue = putEnv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_sleep") ) { outValue = _sleep; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getChar") ) { outValue = getChar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"command") ) { outValue = command_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cpuTime") ) { outValue = cpuTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_env") ) { outValue = get_env; return true;  }
		if (HX_FIELD_EQ(inName,"put_env") ) { outValue = put_env; return true;  }
		if (HX_FIELD_EQ(inName,"get_cwd") ) { outValue = get_cwd; return true;  }
		if (HX_FIELD_EQ(inName,"set_cwd") ) { outValue = set_cwd; return true;  }
		if (HX_FIELD_EQ(inName,"sys_env") ) { outValue = sys_env; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sys_time") ) { outValue = sys_time; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_string") ) { outValue = sys_string; return true;  }
		if (HX_FIELD_EQ(inName,"file_stdin") ) { outValue = file_stdin; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"environment") ) { outValue = environment_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_command") ) { outValue = sys_command; return true;  }
		if (HX_FIELD_EQ(inName,"file_stdout") ) { outValue = file_stdout; return true;  }
		if (HX_FIELD_EQ(inName,"file_stderr") ) { outValue = file_stderr; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_cpu_time") ) { outValue = sys_cpu_time; return true;  }
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { outValue = sys_exe_path; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setTimeLocale") ) { outValue = setTimeLocale_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"escapeArgument") ) { outValue = escapeArgument_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"executablePath") ) { outValue = executablePath_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_time_locale") ) { outValue = set_time_locale; return true;  }
	}
	return false;
}

bool Sys_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getch") ) { getch=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_sleep") ) { _sleep=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_env") ) { get_env=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"put_env") ) { put_env=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"get_cwd") ) { get_cwd=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"set_cwd") ) { set_cwd=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"sys_env") ) { sys_env=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sys_time") ) { sys_time=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sys_string") ) { sys_string=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_stdin") ) { file_stdin=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sys_command") ) { sys_command=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_stdout") ) { file_stdout=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_stderr") ) { file_stderr=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_cpu_time") ) { sys_cpu_time=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { sys_exe_path=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_time_locale") ) { set_time_locale=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::get_env,HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::put_env,HX_HCSTRING("put_env","\x3d","\xbf","\xb8","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::_sleep,HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::set_time_locale,HX_HCSTRING("set_time_locale","\x6f","\x3a","\xe8","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::get_cwd,HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::set_cwd,HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_string,HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_command,HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_time,HX_HCSTRING("sys_time","\xbf","\xcb","\x66","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_cpu_time,HX_HCSTRING("sys_cpu_time","\x76","\xf6","\xdd","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_exe_path,HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_env,HX_HCSTRING("sys_env","\x7b","\x00","\x80","\x85")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stdin,HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stdout,HX_HCSTRING("file_stdout","\x6e","\x0a","\x54","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stderr,HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::getch,HX_HCSTRING("getch","\xbb","\xa8","\x60","\x91")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::get_env,"get_env");
	HX_MARK_MEMBER_NAME(Sys_obj::put_env,"put_env");
	HX_MARK_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_MARK_MEMBER_NAME(Sys_obj::set_time_locale,"set_time_locale");
	HX_MARK_MEMBER_NAME(Sys_obj::get_cwd,"get_cwd");
	HX_MARK_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_time,"sys_time");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_cpu_time,"sys_cpu_time");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_env,"sys_env");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stdin,"file_stdin");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stdout,"file_stdout");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
	HX_MARK_MEMBER_NAME(Sys_obj::getch,"getch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::get_env,"get_env");
	HX_VISIT_MEMBER_NAME(Sys_obj::put_env,"put_env");
	HX_VISIT_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_VISIT_MEMBER_NAME(Sys_obj::set_time_locale,"set_time_locale");
	HX_VISIT_MEMBER_NAME(Sys_obj::get_cwd,"get_cwd");
	HX_VISIT_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_time,"sys_time");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_cpu_time,"sys_cpu_time");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_env,"sys_env");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stdin,"file_stdin");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stdout,"file_stdout");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
	HX_VISIT_MEMBER_NAME(Sys_obj::getch,"getch");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("getChar","\x8c","\x0e","\x42","\x14"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("putEnv","\x5e","\xc4","\xbb","\x72"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("setTimeLocale","\xc9","\xfa","\x00","\x99"),
	HX_HCSTRING("getCwd","\x3a","\xc0","\x1a","\xa3"),
	HX_HCSTRING("setCwd","\xae","\x14","\x63","\x6f"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("escapeArgument","\x1e","\x57","\x56","\x9e"),
	HX_HCSTRING("command","\x4b","\x71","\x6d","\x81"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("cpuTime","\x55","\x2d","\x7d","\x72"),
	HX_HCSTRING("executablePath","\x8f","\x24","\x16","\xe1"),
	HX_HCSTRING("environment","\xd3","\x0b","\x50","\xad"),
	HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),
	HX_HCSTRING("put_env","\x3d","\xbf","\xb8","\x02"),
	HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a"),
	HX_HCSTRING("set_time_locale","\x6f","\x3a","\xe8","\x29"),
	HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26"),
	HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19"),
	HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),
	HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),
	HX_HCSTRING("sys_time","\xbf","\xcb","\x66","\x54"),
	HX_HCSTRING("sys_cpu_time","\x76","\xf6","\xdd","\x32"),
	HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89"),
	HX_HCSTRING("sys_env","\x7b","\x00","\x80","\x85"),
	HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b"),
	HX_HCSTRING("file_stdout","\x6e","\x0a","\x54","\x3c"),
	HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),
	HX_HCSTRING("getch","\xbb","\xa8","\x60","\x91"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &Sys_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	get_env= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);
	put_env= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("put_env","\x3d","\xbf","\xb8","\x02"),(int)2);
	_sleep= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_sleep","\x25","\x79","\x1a","\xf4"),(int)1);
	set_time_locale= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("set_time_locale","\x6f","\x3a","\xe8","\x29"),(int)1);
	get_cwd= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26"),(int)0);
	set_cwd= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19"),(int)1);
	sys_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	sys_command= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),(int)1);
	sys_time= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_time","\xbf","\xcb","\x66","\x54"),(int)0);
	sys_cpu_time= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_cpu_time","\x76","\xf6","\xdd","\x32"),(int)0);
	sys_exe_path= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89"),(int)0);
	sys_env= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_env","\x7b","\x00","\x80","\x85"),(int)0);
	file_stdin= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b"),(int)0);
	file_stdout= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stdout","\x6e","\x0a","\x54","\x3c"),(int)0);
	file_stderr= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),(int)0);
	getch= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_getch","\xc9","\x64","\xb6","\x06"),(int)1);
}

