#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_FRAME("haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",76,0x4f1aa280)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(77)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING(".","\x2e","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("..","\x40","\x28","\x00","\x00"))){
		HX_STACK_LINE(79)
		this->dir = path;
		HX_STACK_LINE(80)
		this->file = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(81)
		return null();
	}
	HX_STACK_LINE(83)
	int tmp1 = path.lastIndexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(84)
	int tmp2 = path.lastIndexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	int c2 = tmp2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(85)
	bool tmp3 = (c1 < c2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	if ((tmp3)){
		HX_STACK_LINE(86)
		int tmp4 = c2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		::String tmp5 = path.substr((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		this->dir = tmp5;
		HX_STACK_LINE(87)
		int tmp6 = (c2 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::String tmp7 = path.substr(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		path = tmp7;
		HX_STACK_LINE(88)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(89)
		bool tmp4 = (c2 < c1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(90)
			int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::String tmp6 = path.substr((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			this->dir = tmp6;
			HX_STACK_LINE(91)
			int tmp7 = (c1 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::String tmp8 = path.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			path = tmp8;
		}
		else{
			HX_STACK_LINE(93)
			this->dir = null();
		}
	}
	HX_STACK_LINE(94)
	int tmp4 = path.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	int cp = tmp4;		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(95)
	bool tmp5 = (cp != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	if ((tmp5)){
		HX_STACK_LINE(96)
		int tmp6 = (cp + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		::String tmp7 = path.substr(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		this->ext = tmp7;
		HX_STACK_LINE(97)
		int tmp8 = cp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		::String tmp9 = path.substr((int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		this->file = tmp9;
	}
	else{
		HX_STACK_LINE(99)
		this->ext = null();
		HX_STACK_LINE(100)
		this->file = path;
	}
}
;
	return null();
}

//Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct(path);
	return _result_;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Path_obj::toString( ){
	HX_STACK_FRAME("haxe.io.Path","toString",0xc0ab5735,"haxe.io.Path.toString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",114,0x4f1aa280)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::String tmp = this->dir;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(115)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(115)
		::String tmp3 = this->dir;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		bool tmp4 = this->backslash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		if ((tmp4)){
			HX_STACK_LINE(115)
			tmp5 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(115)
			tmp5 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(115)
		tmp2 = (tmp3 + tmp5);
	}
	HX_STACK_LINE(115)
	::String tmp3 = this->file;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	::String tmp5 = this->ext;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	if ((tmp6)){
		HX_STACK_LINE(115)
		tmp7 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(115)
		::String tmp8 = this->ext;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		tmp7 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp8);
	}
	HX_STACK_LINE(115)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(115)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

::String Path_obj::withoutExtension( ::String path){
	HX_STACK_FRAME("haxe.io.Path","withoutExtension",0xb4016fa0,"haxe.io.Path.withoutExtension","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",123,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(124)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(125)
	s->ext = null();
	HX_STACK_LINE(126)
	::String tmp1 = s->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutExtension,return )

::String Path_obj::withoutDirectory( ::String path){
	HX_STACK_FRAME("haxe.io.Path","withoutDirectory",0xdf35ce8e,"haxe.io.Path.withoutDirectory","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",134,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(135)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(136)
	s->dir = null();
	HX_STACK_LINE(137)
	::String tmp1 = s->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutDirectory,return )

::String Path_obj::directory( ::String path){
	HX_STACK_FRAME("haxe.io.Path","directory",0xbcfe23c4,"haxe.io.Path.directory","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",147,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(148)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(149)
	bool tmp1 = (s->dir == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(150)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(151)
	::String tmp2 = s->dir;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::extension( ::String path){
	HX_STACK_FRAME("haxe.io.Path","extension",0x91c9c4d6,"haxe.io.Path.extension","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",161,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(162)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(163)
	bool tmp1 = (s->ext == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(164)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(165)
	::String tmp2 = s->ext;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,extension,return )

::String Path_obj::withExtension( ::String path,::String ext){
	HX_STACK_FRAME("haxe.io.Path","withExtension",0x256d3570,"haxe.io.Path.withExtension","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",175,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(ext,"ext")
	HX_STACK_LINE(176)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(177)
	s->ext = ext;
	HX_STACK_LINE(178)
	::String tmp1 = s->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,withExtension,return )

::String Path_obj::join( Array< ::String > paths){
	HX_STACK_FRAME("haxe.io.Path","join",0x05c781f3,"haxe.io.Path.join","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",189,0x4f1aa280)
	HX_STACK_ARG(paths,"paths")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	bool run(::String s){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",190,0x4f1aa280)
		HX_STACK_ARG(s,"s")
		{
			HX_STACK_LINE(190)
			bool tmp = (s != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(190)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			if ((tmp)){
				HX_STACK_LINE(190)
				tmp1 = (s != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(190)
				tmp1 = false;
			}
			HX_STACK_LINE(190)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(190)
	Array< ::String > paths1 = paths->filter( Dynamic(new _Function_1_1()));		HX_STACK_VAR(paths1,"paths1");
	HX_STACK_LINE(191)
	bool tmp = (paths1->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	if ((tmp)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(194)
	::String tmp1 = paths1->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	::String path = tmp1;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(195)
		int _g = paths1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		while((true)){
			HX_STACK_LINE(195)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(195)
			if ((tmp3)){
				HX_STACK_LINE(195)
				break;
			}
			HX_STACK_LINE(195)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(195)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(196)
			::String tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			::String tmp6 = ::haxe::io::Path_obj::addTrailingSlash(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			path = tmp6;
			HX_STACK_LINE(197)
			::String tmp7 = paths1->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			hx::AddEq(path,tmp7);
		}
	}
	HX_STACK_LINE(199)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	::String tmp3 = ::haxe::io::Path_obj::normalize(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,join,return )

::String Path_obj::normalize( ::String path){
	HX_STACK_FRAME("haxe.io.Path","normalize",0x585a68e4,"haxe.io.Path.normalize","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",210,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(211)
	::String slash = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");		HX_STACK_VAR(slash,"slash");
	HX_STACK_LINE(212)
	::String tmp = path.split(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	path = tmp;
	HX_STACK_LINE(213)
	bool tmp1 = (path == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(213)
	if ((tmp2)){
		HX_STACK_LINE(213)
		tmp3 = (path == slash);
	}
	else{
		HX_STACK_LINE(213)
		tmp3 = true;
	}
	HX_STACK_LINE(213)
	if ((tmp3)){
		HX_STACK_LINE(214)
		::String tmp4 = slash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		return tmp4;
	}
	HX_STACK_LINE(217)
	Array< ::String > target = Array_obj< ::String >::__new();		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		::String tmp4 = slash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		Array< ::String > _g1 = path.split(tmp4);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(219)
		while((true)){
			HX_STACK_LINE(219)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			if ((tmp6)){
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(219)
			::String tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(219)
			::String token = tmp7;		HX_STACK_VAR(token,"token");
			HX_STACK_LINE(219)
			++(_g);
			HX_STACK_LINE(220)
			bool tmp8 = (token == HX_HCSTRING("..","\x40","\x28","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(220)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(220)
			if ((tmp9)){
				HX_STACK_LINE(220)
				tmp10 = (target->length > (int)0);
			}
			else{
				HX_STACK_LINE(220)
				tmp10 = false;
			}
			HX_STACK_LINE(220)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			if ((tmp10)){
				HX_STACK_LINE(220)
				int tmp12 = (target->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(220)
				::String tmp14 = target->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(220)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(220)
				tmp11 = (tmp15 != HX_HCSTRING("..","\x40","\x28","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(220)
				tmp11 = false;
			}
			HX_STACK_LINE(220)
			if ((tmp11)){
				HX_STACK_LINE(221)
				target->pop();
			}
			else{
				HX_STACK_LINE(222)
				bool tmp12 = (token != HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(222)
				if ((tmp12)){
					HX_STACK_LINE(223)
					::String tmp13 = token;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(223)
					target->push(tmp13);
				}
			}
		}
	}
	HX_STACK_LINE(227)
	::String tmp4 = slash;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(227)
	::String tmp5 = target->join(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(227)
	::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(228)
	::EReg tmp7 = ::EReg_obj::__new(HX_HCSTRING("([^:])/+","\xd7","\xb8","\x64","\xf0"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(228)
	::EReg regex = tmp7;		HX_STACK_VAR(regex,"regex");
	HX_STACK_LINE(229)
	::String tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(229)
	::String tmp9 = (HX_HCSTRING("$1","\x8d","\x1f","\x00","\x00") + slash);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(229)
	::String tmp10 = regex->replace(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(229)
	::String result = tmp10;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(230)
	::StringBuf tmp11 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(230)
	::StringBuf acc = tmp11;		HX_STACK_VAR(acc,"acc");
	HX_STACK_LINE(231)
	bool colon = false;		HX_STACK_VAR(colon,"colon");
	HX_STACK_LINE(232)
	bool slashes = false;		HX_STACK_VAR(slashes,"slashes");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		int _g = tmp6.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(233)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(233)
			if ((tmp13)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(233)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(233)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(234)
				Dynamic tmp16 = tmp6.charCodeAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(234)
				Dynamic _g2 = tmp16;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					Dynamic i1 = _g2;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(234)
					bool tmp17 = (_g2 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(234)
					if ((tmp17)){
						HX_STACK_LINE(234)
						Dynamic tmp18 = _g2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(234)
						switch( (int)(tmp18)){
							case (int)58: {
								HX_STACK_LINE(236)
								acc->add(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
								HX_STACK_LINE(237)
								colon = true;
							}
							;break;
							case (int)47: {
								HX_STACK_LINE(238)
								bool tmp19 = (colon == false);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(238)
								if ((tmp19)){
									HX_STACK_LINE(239)
									slashes = true;
								}
								else{
									HX_STACK_LINE(241)
									colon = false;
									HX_STACK_LINE(242)
									bool tmp20 = slashes;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(242)
									if ((tmp20)){
										HX_STACK_LINE(243)
										acc->add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
										HX_STACK_LINE(244)
										slashes = false;
									}
									HX_STACK_LINE(246)
									Dynamic tmp21 = i1;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(246)
									::String tmp22 = ::String::fromCharCode(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(246)
									acc->add(tmp22);
								}
							}
							;break;
							default: {
								HX_STACK_LINE(241)
								colon = false;
								HX_STACK_LINE(242)
								bool tmp19 = slashes;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(242)
								if ((tmp19)){
									HX_STACK_LINE(243)
									acc->add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
									HX_STACK_LINE(244)
									slashes = false;
								}
								HX_STACK_LINE(246)
								Dynamic tmp20 = i1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(246)
								::String tmp21 = ::String::fromCharCode(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(246)
								acc->add(tmp21);
							}
						}
					}
					else{
						HX_STACK_LINE(241)
						colon = false;
						HX_STACK_LINE(242)
						bool tmp18 = slashes;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(242)
						if ((tmp18)){
							HX_STACK_LINE(243)
							acc->add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
							HX_STACK_LINE(244)
							slashes = false;
						}
						HX_STACK_LINE(246)
						Dynamic tmp19 = i1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(246)
						::String tmp20 = ::String::fromCharCode(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(246)
						acc->add(tmp20);
					}
				}
			}
		}
	}
	HX_STACK_LINE(249)
	::String tmp12 = acc->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(249)
	::String result1 = tmp12;		HX_STACK_VAR(result1,"result1");
	HX_STACK_LINE(250)
	::String tmp13 = result1;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(250)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,normalize,return )

::String Path_obj::addTrailingSlash( ::String path){
	HX_STACK_FRAME("haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",265,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(266)
	bool tmp = (path.length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	if ((tmp)){
		HX_STACK_LINE(267)
		return HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
	}
	HX_STACK_LINE(268)
	int tmp1 = path.lastIndexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(269)
	int tmp2 = path.lastIndexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	int c2 = tmp2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(270)
	bool tmp3 = (c1 < c2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	if ((tmp3)){
		HX_STACK_LINE(271)
		int tmp5 = c2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		int tmp6 = (path.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		if ((tmp7)){
			HX_STACK_LINE(271)
			tmp4 = (path + HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(272)
			tmp4 = path;
		}
	}
	else{
		HX_STACK_LINE(274)
		int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		int tmp6 = (path.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		if ((tmp7)){
			HX_STACK_LINE(274)
			tmp4 = (path + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(275)
			tmp4 = path;
		}
	}
	HX_STACK_LINE(270)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes( ::String path){
	HX_STACK_FRAME("haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",290,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(291)
	while((true)){
		HX_STACK_LINE(292)
		int tmp = (path.length - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Dynamic tmp1 = path.charCodeAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		Dynamic _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		bool tmp2 = (_g != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		if ((tmp2)){
			HX_STACK_LINE(292)
			Dynamic tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			Dynamic _switch_2 = (tmp3);
			if (  ( _switch_2==(int)47) ||  ( _switch_2==(int)92)){
				HX_STACK_LINE(293)
				::String tmp4 = path.substr((int)0,(int)-1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				path = tmp4;
			}
			else  {
				HX_STACK_LINE(294)
				break;
			}
;
;
		}
		else{
			HX_STACK_LINE(294)
			break;
		}
	}
	HX_STACK_LINE(297)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )

bool Path_obj::isAbsolute( ::String path){
	HX_STACK_FRAME("haxe.io.Path","isAbsolute",0xb396db4a,"haxe.io.Path.isAbsolute","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",304,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(305)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	if ((tmp1)){
		HX_STACK_LINE(305)
		return true;
	}
	HX_STACK_LINE(306)
	::String tmp2 = path.charAt((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	bool tmp3 = (tmp2 == HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	if ((tmp3)){
		HX_STACK_LINE(306)
		return true;
	}
	HX_STACK_LINE(307)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,isAbsolute,return )

::String Path_obj::unescape( ::String path){
	HX_STACK_FRAME("haxe.io.Path","unescape",0x655df923,"haxe.io.Path.unescape","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",310,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(311)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("-x([0-9][0-9])","\xac","\x12","\x39","\x1d"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	::EReg regex = tmp;		HX_STACK_VAR(regex,"regex");
	HX_STACK_LINE(312)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::String run(::EReg regex1){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",312,0x4f1aa280)
		HX_STACK_ARG(regex1,"regex1")
		{
			HX_STACK_LINE(312)
			::String tmp2 = regex1->matched((int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(312)
			Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(312)
			::String tmp4 = ::String::fromCharCode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			return tmp4;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(312)
	::String tmp2 = regex->map(tmp1, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,unescape,return )

::String Path_obj::escape( ::String path,hx::Null< bool >  __o_allowSlashes){
bool allowSlashes = __o_allowSlashes.Default(false);
	HX_STACK_FRAME("haxe.io.Path","escape",0xf1f2e5ca,"haxe.io.Path.escape","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",315,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(allowSlashes,"allowSlashes")
{
		HX_STACK_LINE(316)
		bool tmp = allowSlashes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		::EReg tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		if ((tmp)){
			HX_STACK_LINE(316)
			tmp1 = ::EReg_obj::__new(HX_HCSTRING("[^A-Za-z0-9_/\\\\\\.]","\xe2","\x20","\xd8","\x87"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(316)
			tmp1 = ::EReg_obj::__new(HX_HCSTRING("[^A-Za-z0-9_\\.]","\xe5","\x4f","\x7d","\x11"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(316)
		::EReg regex = tmp1;		HX_STACK_VAR(regex,"regex");
		HX_STACK_LINE(317)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		::String run(::EReg v){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",317,0x4f1aa280)
			HX_STACK_ARG(v,"v")
			{
				HX_STACK_LINE(317)
				::String tmp3 = v->matched((int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(317)
				Dynamic tmp4 = tmp3.charCodeAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(317)
				::String tmp5 = (HX_HCSTRING("-x","\xab","\x27","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(317)
				return tmp5;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(317)
		::String tmp3 = regex->map(tmp2, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Path_obj,escape,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

Dynamic Path_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
	}
	return super::__Field(inName,inCallProp);
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unescape") ) { outValue = unescape_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { outValue = directory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"extension") ) { outValue = extension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { outValue = isAbsolute_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"withExtension") ) { outValue = withExtension_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"withoutExtension") ) { outValue = withoutExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"withoutDirectory") ) { outValue = withoutDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true;  }
	}
	return false;
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("withoutExtension","\x17","\xb8","\x9d","\x4f"),
	HX_HCSTRING("withoutDirectory","\x05","\x17","\xd2","\x7a"),
	HX_HCSTRING("directory","\x6d","\xf2","\x44","\x10"),
	HX_HCSTRING("extension","\x7f","\x93","\x10","\xe5"),
	HX_HCSTRING("withExtension","\x99","\x0c","\xeb","\x6d"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("addTrailingSlash","\xe0","\xd6","\xeb","\x26"),
	HX_HCSTRING("removeTrailingSlashes","\x8b","\xdc","\x1d","\x43"),
	HX_HCSTRING("isAbsolute","\x81","\xe0","\x44","\x3e"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	::String(null()) };

void Path_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
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

} // end namespace haxe
} // end namespace io
